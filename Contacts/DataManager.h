#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include "Person.h"
#include <vector>
#include <QString>
#include <QTableWidget>

class DataManager {
public:
    static bool save2File(const std::vector<Person>& contacts, const QString &filePath);
    static std::vector<Person> loadFromFile(const QString &filePath);
    static void loadContacts2Table(const std::vector<Person>& contacts, QTableWidget *table);
};

#endif // DATAMANAGER_H
