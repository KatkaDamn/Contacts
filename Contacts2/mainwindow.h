#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Person.h"
#include "PersonManager.h"
#include "ActionHandler.h"
#include "DataManager.h"
#include "sql.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_idOfDelete_editingFinished();

private:
    PersonManager personManager;
    Ui::MainWindow *ui;
    ActionHandler *actionHandler;
    void connections();
    sql* sqlData;
};
#endif // MAINWINDOW_H
