#include "PersonManager.h"
#include <iostream>

void PersonManager::addPerson(const Person& contact) {
    people.push_back(contact);
}

void PersonManager::deletePerson(int index) {
    if (index >= 0 && index < (int)people.size()) {
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

void PersonManager::setPerson(int index, const Person& contact) {
    if (index >= 0 && static_cast<size_t>(index) < people.size()) {
        people[index] = contact;
    }
}

const std::vector<Person>& PersonManager::getContacts() const {
    return people;
}
