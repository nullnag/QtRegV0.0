#include "registration.h"
#include "mainwindow.h"
#include "ui_registration.h"
#include <QMessageBox>
Registration::Registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_LoginBoxR_textEdited(const QString &arg1)
{
    if (arg1.length() > 6){
        this->loginPassR = 1;
    }
    else{
        this->loginPassR = 0;
    }
    button_activateR(this->loginPassR,this->passwordPassR);
}
void Registration::on_PasswordBoxR_textChanged(const QString &arg1)
{
    if (arg1.length() > 8){
        this->passwordPassR = 1;
    }
    else{
        this->passwordPassR = 0;
    }
    button_activateR(this->loginPassR,this->passwordPassR);
}

void Registration::button_activateR(bool& loginPass,bool& passwordPass){
    if (loginPass && passwordPass){
        ui->RegButton->setEnabled(true);
    }
    else{
        ui->RegButton->setEnabled(false);
    }
}



void Registration::on_RegButton_clicked()
{
    QMessageBox::about(this,"Успех","Вы зарегистрировались");
    this->hide();
    MainWindow mainWindow;
    mainWindow.show();

}

