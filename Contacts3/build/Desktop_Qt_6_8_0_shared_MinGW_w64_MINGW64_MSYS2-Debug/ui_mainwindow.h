/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddUser;
    QTableWidget *tableWidget;
    QLineEdit *Name;
    QLineEdit *LastName;
    QLineEdit *MiddleName;
    QLineEdit *adress;
    QLineEdit *birthdate;
    QLineEdit *phoneNumbers;
    QLineEdit *mail;
    QLineEdit *idOfDelete;
    QPushButton *DeleteUser;
    QLineEdit *filepath;
    QPushButton *SaveUser;
    QPushButton *LoadUsers;
    QLineEdit *filepathtoload;
    QPushButton *LoadFromDB;
    QPushButton *SaveToDB;
    QPushButton *findByRowButton;
    QLineEdit *findByRow;
    QPushButton *sortFieldLineButton;
    QLineEdit *sortFieldLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(968, 559);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddUser = new QPushButton(centralwidget);
        AddUser->setObjectName("AddUser");
        AddUser->setGeometry(QRect(20, 340, 75, 24));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 941, 201));
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setDefaultSectionSize(130);
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(20, 220, 113, 22));
        LastName = new QLineEdit(centralwidget);
        LastName->setObjectName("LastName");
        LastName->setGeometry(QRect(20, 250, 113, 22));
        MiddleName = new QLineEdit(centralwidget);
        MiddleName->setObjectName("MiddleName");
        MiddleName->setGeometry(QRect(20, 280, 113, 22));
        adress = new QLineEdit(centralwidget);
        adress->setObjectName("adress");
        adress->setGeometry(QRect(140, 220, 113, 22));
        birthdate = new QLineEdit(centralwidget);
        birthdate->setObjectName("birthdate");
        birthdate->setGeometry(QRect(140, 250, 113, 22));
        phoneNumbers = new QLineEdit(centralwidget);
        phoneNumbers->setObjectName("phoneNumbers");
        phoneNumbers->setGeometry(QRect(20, 310, 111, 22));
        mail = new QLineEdit(centralwidget);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(140, 280, 113, 22));
        idOfDelete = new QLineEdit(centralwidget);
        idOfDelete->setObjectName("idOfDelete");
        idOfDelete->setGeometry(QRect(100, 390, 51, 22));
        DeleteUser = new QPushButton(centralwidget);
        DeleteUser->setObjectName("DeleteUser");
        DeleteUser->setGeometry(QRect(10, 390, 81, 24));
        filepath = new QLineEdit(centralwidget);
        filepath->setObjectName("filepath");
        filepath->setGeometry(QRect(280, 390, 291, 22));
        SaveUser = new QPushButton(centralwidget);
        SaveUser->setObjectName("SaveUser");
        SaveUser->setGeometry(QRect(160, 390, 111, 24));
        LoadUsers = new QPushButton(centralwidget);
        LoadUsers->setObjectName("LoadUsers");
        LoadUsers->setGeometry(QRect(160, 420, 111, 24));
        filepathtoload = new QLineEdit(centralwidget);
        filepathtoload->setObjectName("filepathtoload");
        filepathtoload->setGeometry(QRect(280, 420, 291, 22));
        LoadFromDB = new QPushButton(centralwidget);
        LoadFromDB->setObjectName("LoadFromDB");
        LoadFromDB->setGeometry(QRect(130, 480, 111, 24));
        SaveToDB = new QPushButton(centralwidget);
        SaveToDB->setObjectName("SaveToDB");
        SaveToDB->setGeometry(QRect(10, 480, 111, 24));
        findByRowButton = new QPushButton(centralwidget);
        findByRowButton->setObjectName("findByRowButton");
        findByRowButton->setGeometry(QRect(10, 450, 231, 24));
        findByRow = new QLineEdit(centralwidget);
        findByRow->setObjectName("findByRow");
        findByRow->setGeometry(QRect(250, 450, 141, 22));
        sortFieldLineButton = new QPushButton(centralwidget);
        sortFieldLineButton->setObjectName("sortFieldLineButton");
        sortFieldLineButton->setGeometry(QRect(10, 420, 75, 24));
        sortFieldLineEdit = new QLineEdit(centralwidget);
        sortFieldLineEdit->setObjectName("sortFieldLineEdit");
        sortFieldLineEdit->setGeometry(QRect(90, 420, 61, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 968, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddUser->setText(QCoreApplication::translate("MainWindow", "AddUser", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\260\320\264\321\200\320\265\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\264\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\321\207\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\275\320\276\320\274\320\265\321\200\320\260 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\276\320\262", nullptr));
        phoneNumbers->setText(QString());
        DeleteUser->setText(QCoreApplication::translate("MainWindow", "DeleteUser(id)", nullptr));
        SaveUser->setText(QCoreApplication::translate("MainWindow", "Save Users(flePath)", nullptr));
        LoadUsers->setText(QCoreApplication::translate("MainWindow", "Load Users(flePath)", nullptr));
        LoadFromDB->setText(QCoreApplication::translate("MainWindow", "LoadFromDB", nullptr));
        SaveToDB->setText(QCoreApplication::translate("MainWindow", "SaveToDB", nullptr));
        findByRowButton->setText(QCoreApplication::translate("MainWindow", "FindByRow(Name, Last_Name or Email)", nullptr));
        sortFieldLineButton->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
