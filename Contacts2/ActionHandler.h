#ifndef ACTIONHANDLER_H
#define ACTIONHANDLER_H

#include <QObject>
#include <QPushButton>
#include <QTableWidget>
#include <QLineEdit>
#include "Person.h"
#include "PersonManager.h"
#include "DataManager.h"

class ActionHandler : public QObject
{
    Q_OBJECT

public:
    ActionHandler(PersonManager &manager, QTableWidget *table, const QList<QLineEdit *> &fields, QObject *parent = nullptr);
    void addPerson();
    void deletePerson();
    void setId(int id);
    ~ActionHandler();
    void cellChanged(int row, int column);
    void search(QString query);
    void sort(QString columnName);
private:
    PersonManager &manager;
    QTableWidget *table;
    QList<QLineEdit *> fields;
    int id;
};

#endif // ACTIONHANDLER_H
