#include "../headers/FileHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>

bool FileHandler::saveToFile(const std::string& filePath, const std::vector<Person>& contacts) {
    std::ofstream file(filePath, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Error ocured while file opening.\n";
        return false;
    }

    for (const auto& contact : contacts) {
        file << contact.getFirstName() << "`" << contact.getSurname() << "`"
             << contact.getMiddleName() << "`" << contact.getAddress() << "`"
             << contact.getBirthDate() << "`" << contact.getEmail();

        for (const auto& phone : contact.getPhones()) {
            file << "`" << phone;
        }
        file << "\n";
    }

    file.close();
    return true;
}

std::vector<Person> FileHandler::loadFromFile(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error ocured while file opening.\n";
        return {};
    }

    std::vector<Person> contacts;
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream stream(line);
        std::string firstName, lastName, middleName, address, birthDate, email;
        std::vector<std::string> phoneNumbers;

        std::getline(stream, firstName, '`');
        std::getline(stream, lastName, '`');
        std::getline(stream, middleName, '`');
        std::getline(stream, address, '`');
        std::getline(stream, birthDate, '`');
        std::getline(stream, email, '`');

        std::string phone;
        while (std::getline(stream, phone, '`')) {
            phoneNumbers.push_back(phone);
        }
        
        Person contact(firstName, lastName, middleName, address, birthDate, email, phoneNumbers);
        if(contact.validate() && contact.isValidDate()) contacts.push_back(contact);
        else std::cout<<"Some contacts are not valid, check the file, all valid data was uploaded";
    }

    file.close();
    return contacts;
}
