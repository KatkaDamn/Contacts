#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "Person.h"
#include <vector>
#include <string>

class FileHandler {
public:
    static bool saveToFile(const std::string& filePath, const std::vector<Person>& contacts);
    static std::vector<Person> loadFromFile(const std::string& filePath);
};

#endif // FILEHANDLER_H
