#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>

class Person {
public:
    Person() = default;
    Person(const std::string& firstName, const std::string& lastName, const std::string& middleName,
            const std::string& address, const std::string& birthDate, const std::string& email,
            const std::vector<std::string>& phoneNumbers);

    bool validate() const;
    bool isValidDate();
    bool isLeapYear(int year);

    std::string getFirstName() const;
    std::string getSurname() const;
    std::string getMiddleName() const;
    std::string getAddress() const;
    std::string getBirthDate() const;
    std::string getEmail() const;
    std::vector<std::string> getPhones() const;

    void setFirstName(const std::string& firstName);
    void setSurname(const std::string& lastName);
    void setMiddleName(const std::string& middleName);
    void setAddress(const std::string& address);
    void setBirthDate(const std::string& birthDate);
    void setEmail(const std::string& email);
    void setPhones(const std::vector<std::string>& phoneNumbers);

private:
    std::string firstName;
    std::string surname;
    std::string middleName;
    std::string address;
    std::string birthDate;
    std::string email;
    std::vector<std::string> phones;
};

#endif // CONTACT_H
