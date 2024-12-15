#include "../headers/PersonManager.h"
void PersonManager::addPerson(const Person& contact) {
    people.push_back(contact);
}

void PersonManager::deletePerson(int index) {
    if (index >= 0 && index < people.size()) {
        people.erase(people.begin() + index);
    }
}

void PersonManager::showPeople() const {
    if (people.empty()) {
        std::cout << "List of contacts is empty.\n";
        return;
    }

    for (size_t i = 0; i < people.size(); ++i) {
        const auto& contact = people[i];
        std::cout << i + 1 << ". " << contact.getFirstName() << " " << contact.getSurname()
                  << " (" << contact.getEmail() << ")\n";
    }
}

void PersonManager::findContacts(std::string value){
    for (size_t i = 0; i < people.size(); ++i) {
        const auto& contact = people[i];
        if(contact.getFirstName() == value || contact.getSurname() == value || contact.getEmail() == value){
        std::cout << i + 1 << ". " << contact.getFirstName() << " " << contact.getSurname()
                  << " (" << contact.getEmail() << ")\n";
        }
    }
}

void PersonManager::sortContacts(std::string field) {
    if (field == "firstName") {
        std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
            return a.getFirstName() < b.getFirstName();
        });
    } else if (field == "lastName") {
        std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
            return a.getSurname() < b.getSurname();
        });
    } else if (field == "email") {
        std::sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
            return a.getEmail() < b.getEmail();
        });
    } else {
        std::cerr << "Unknown field for sorting: " << field << std::endl;
    }
}

void PersonManager::editContact(int index, std::string valueToChange, std::string value){
    Person contact = people[index];
    if(valueToChange == "firstName") people[index].setFirstName(value);
    else if(valueToChange == "lastName") people[index].setSurname(value);
    else if(valueToChange == "middleName") people[index].setMiddleName(value);
    else if(valueToChange == "birthDate") people[index].setBirthDate(value);
    else if(valueToChange == "email") people[index].setEmail(value);
    else if(valueToChange == "address") people[index].setAddress(value);
    else if(valueToChange == "phoneNumbers"){
        std::istringstream stream(value);
        std::string number;
        std::vector<std::string> numbers;
        while (stream >> number) {
            numbers.push_back(number);
        }
        people[index].setPhones(numbers);
    } 
    else std::cout<< "Unknown field to edit: " << std::endl;
    if(!people[index].isValidDate() || !people[index].validate()){
        people[index] = contact;
        std::cout<<"people are not valid!"<<std::endl;
    }
    else std::cout<< "people are successfully edited!"<<std::endl;
}




void PersonManager::setPerson(int index, const Person& contact) {
    if (index >= 0 && static_cast<size_t>(index) < people.size()) {
        people[index] = contact;
    }
}

const std::vector<Person>& PersonManager::getContacts() const {
    return people;
}
