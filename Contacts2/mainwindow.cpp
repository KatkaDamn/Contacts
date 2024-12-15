#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ActionHandler.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QLineEdit *> fields = {
        ui->Name,
        ui->LastName,
        ui->MiddleName,
        ui->adress,
        ui->birthdate,
        ui->mail,
        ui->phoneNumbers,
    };
    ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
    actionHandler = new ActionHandler(personManager, ui->tableWidget, fields,this);
    sqlData = new sql("contacts.db");
    connections();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_idOfDelete_editingFinished(){
    actionHandler->setId(ui->idOfDelete->text().toInt()-1);
    ui->idOfDelete->clear();
}


void MainWindow::connections(){
    connect(ui->AddUser, &QPushButton::clicked, actionHandler, &ActionHandler::addPerson);
    connect(ui->DeleteUser, &QPushButton::clicked, actionHandler, &ActionHandler::deletePerson);
    connect(ui->findByRowButton, &QPushButton::clicked, this, [this]() {
        actionHandler->search(ui->findByRow->text());
    });
    connect(ui->sortFieldLineButton, &QPushButton::clicked, this, [this]() {
        QString field = ui->sortFieldLineEdit->text();
        actionHandler->sort(field);
    });
    connect(ui->tableWidget, &QTableWidget::cellChanged, actionHandler, &ActionHandler::cellChanged);
    connect(ui->SaveUser, &QPushButton::clicked, this, [this]() {
        DataManager::save2File(personManager.getPeople(), ui->filepath->text());
    });
    connect(ui->LoadUsers, &QPushButton::clicked, this, [this]() {
        std::vector<Person> contacts = DataManager::loadFromFile(ui->filepathtoload->text());
        for (const auto& contact : contacts) {
            personManager.addPerson(contact);
        }
        DataManager::loadContacts2Table(contacts, ui->tableWidget);
    });
    connect(ui->SaveToDB, &QPushButton::clicked, this, [this]() {
        if (sqlData->save2DB(personManager.getPeople())) {
            qInfo("Успех", "Контакты успешно сохранены в базу данных.");
        } else {
            //QMessageBox::critical(this, "Ошибка", "Не удалось сохранить контакты в базу данных.");
        }
    });
    connect(ui->LoadFromDB, &QPushButton::clicked, this, [this]() {
        std::vector<Person> contacts = sqlData->loadDataFromDB();
        for (const auto& contact : contacts) {
            personManager.addPerson(contact);
        }
        DataManager::loadContacts2Table(personManager.getPeople(), ui->tableWidget);
        //QMessageBox::information(this, "Успех", "Контакты успешно загружены из базы данных.");
    });
}

