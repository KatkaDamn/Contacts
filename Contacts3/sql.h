#ifndef SQL_H
#define SQL_H

#include "Person.h"
#include <vector>
#include <QString>
#include <QSqlDatabase>

class sql {
public:
    sql(const QString& dbPath);
    ~sql();

    bool save2DB(const std::vector<Person>& people);
    std::vector<Person> loadDataFromDB();

private:
    QSqlDatabase db;
    bool createTable();
};

#endif // SQL_H
