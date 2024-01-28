#include "regwindow.h"
#include "ui_regwindow.h"
#include <QMessageBox>

RegWindow::RegWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegWindow)
{
    ui->setupUi(this);
    ui->WrongEmail->setVisible(false);

}

RegWindow::~RegWindow()
{
    delete ui;
}

void RegWindow::on_CancleButton_clicked()
{
    RegWindow::close();
}


void RegWindow::on_EmailEdit_editingFinished()
{

    QString Email = ui->EmailEdit->text();
    for (int i = 0; i < Email.length(); i++){
        if (Email[i] == '@'){

            ui->WrongEmail->setVisible(false);
            this->Email = Email;
            break;

        }
        ui->WrongEmail->setVisible(true);
        ui->SignInButton->setEnabled(false);
    }
    QPushButton* SignInButton = ui->SignInButton;
    RegWindow::checkPasswords(this->Password1,Password2,*SignInButton);
}





void RegWindow::on_Password1Edit_textEdited(const QString &arg1)
{
    QString Password1 = ui->Password1Edit->text();
    this->Password1 = Password1;
    QPushButton* SignInButton = ui->SignInButton;
    RegWindow::checkPasswords(this->Password1,Password2,*SignInButton);
}


void RegWindow::on_Password2Edit_textEdited(const QString &arg1)
{
    QString Password2 = ui->Password2Edit->text();
    this->Password2 = Password2;
    QPushButton* SignInButton = ui->SignInButton;
    RegWindow::checkPasswords(this->Password1,Password2,*SignInButton);
}



void RegWindow::on_SignInButton_clicked()
{
    QMessageBox msg;
    msg.setText("Success");
    msg.exec();
    close();
}

