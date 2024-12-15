#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include "Person.h"
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
class PersonManager {
public:
    void addPerson(const Person& contact);
    void deletePerson(int index);
    void showPeople() const;
    const std::vector<Person>& getContacts() const;
    void setPerson(int index, const Person& contact);
    void findContacts(std::string value);
    void sortContacts(std::string field);
    void editContact(int index, std::string valueToChange, std::string value);
private:
    std::vector<Person> people;
};

#endif // CONTACTMANAGER_H
