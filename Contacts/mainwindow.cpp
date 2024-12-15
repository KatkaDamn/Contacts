#include "mainwindow.h"
#include "ui_mainwindow.h"
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
        DataManager::save2File(personManager.getContacts(), ui->filepath->text());
    });
    connect(ui->LoadUsers, &QPushButton::clicked, this, [this]() {
        std::vector<Person> contacts = DataManager::loadFromFile(ui->filepathtoload->text());
        for (const auto& contact : contacts) {
            personManager.addPerson(contact);
        }
        DataManager::loadContacts2Table(contacts, ui->tableWidget);
    });
}

