#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include "Person.h"
#include <vector>

class PersonManager {
public:
    void addPerson(const Person& contact);
    void deletePerson(int index);
    void showPeople() const;
    const std::vector<Person>& getContacts() const;
    void setPerson(int index, const Person& contact);
private:
    std::vector<Person> people;
};

#endif // CONTACTMANAGER_H
