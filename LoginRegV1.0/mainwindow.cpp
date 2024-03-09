#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../db/Employees.db");
    if (db.open()){
        ui->statusbar->showMessage("open" + db.databaseName());
    }
    else{
        ui->statusbar->showMessage("Error ");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_LoginBox_textEdited(const QString &arg1)
{
    if (arg1.length() > 6){
        this->loginPass = 1;
    }
    else{
        this->loginPass = 0;
    }
    button_activate(this->loginPass,this->passwordPass);
}


void MainWindow::on_PasswordBox_textEdited(const QString &arg1)
{
    if (arg1.length() > 8){
        this->passwordPass = 1;
    }
    else{
        this->passwordPass = 0;
    }
    button_activate(this->loginPass,this->passwordPass);
}
void MainWindow::button_activate(bool& loginPass,bool& passwordPass){
    if (loginPass && passwordPass){
        ui->LogInButton->setEnabled(true);
    }
    else{
        ui->LogInButton->setEnabled(false);
    }
}


void MainWindow::on_LogInButton_clicked()
{
    QMessageBox::about(this,"Вход","Вы успешно вошли в систему");
}


void MainWindow::on_RegButton_clicked()
{
    Registration reg;
    reg.setModal(true);
    reg.exec();
}

