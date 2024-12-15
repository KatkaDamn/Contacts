#include "../headers/Person.h"
#include <regex>

Person::Person(const std::string& firstName, const std::string& lastName, const std::string& middleName,
                 const std::string& address, const std::string& birthDate, const std::string& email,
                 const std::vector<std::string>& phoneNumbers)
    : firstName(firstName), surname(lastName), middleName(middleName), address(address),
      birthDate(birthDate), email(email), phones(phoneNumbers) {}

bool Person::validate() const {
    std::regex nameRegex(R"(^[A-Za-zА-Яа-яЁё][A-Za-zА-Яа-яЁё\s\-]*[A-Za-zА-Яа-яЁё]$)");
    std::regex emailRegex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    std::regex phoneRegex(R"(^\+?[0-9\- ]+$)");

    if (!std::regex_match(firstName, nameRegex) ||
        !std::regex_match(surname, nameRegex) ||
        !std::regex_match(middleName, nameRegex)) {
        return false;
    }

    if (!std::regex_match(email, emailRegex)) {
        return false;
    }

    for (const auto& phone : phones) {
        if (!std::regex_match(phone, phoneRegex)) {
            return false;
        }
    }

    return true;
}

bool Person::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Person::isValidDate() {
    int day, month, year;
    std::string date = birthDate;
    char delimiter;
    std::istringstream stream(date);
    if (!(stream >> year >> delimiter >> month >> delimiter >> day) || delimiter != '-') {
        return false;
    }

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int maxDays = daysInMonth[month - 1];
    if (month == 2 && isLeapYear(year)) {
        maxDays = 29;
    }
    if (day > maxDays) {
        return false;
    }

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    if (year > (now->tm_year + 1900)) return false;
    if (year == (now->tm_year + 1900) && month > (now->tm_mon + 1)) return false;
    if (year == (now->tm_year + 1900) && month == (now->tm_mon + 1) && day > now->tm_mday) {
        return false;
    }

    return true;
}

std::string Person::getFirstName() const { return firstName; }
std::string Person::getSurname() const { return surname; }
std::string Person::getMiddleName() const { return middleName; }
std::string Person::getAddress() const { return address; }
std::string Person::getBirthDate() const { return birthDate; }
std::string Person::getEmail() const { return email; }
std::vector<std::string> Person::getPhones() const { return phones; }

void Person::setFirstName(const std::string& firstName) { this->firstName = firstName; }
void Person::setSurname(const std::string& lastName) { this->surname = lastName; }
void Person::setMiddleName(const std::string& middleName) { this->middleName = middleName; }
void Person::setAddress(const std::string& address) { this->address = address; }
void Person::setBirthDate(const std::string& birthDate) { this->birthDate = birthDate; }
void Person::setEmail(const std::string& email) { this->email = email; }
void Person::setPhones(const std::vector<std::string>& phoneNumbers) { this->phones = phoneNumbers; }
