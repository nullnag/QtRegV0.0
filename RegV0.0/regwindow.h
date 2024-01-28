#ifndef REGWINDOW_H
#define REGWINDOW_H

#include "qpushbutton.h"
#include <QDialog>
#include <QMessageBox>>
QT_BEGIN_NAMESPACE
namespace Ui {
class RegWindow;
}
QT_END_NAMESPACE

class RegWindow : public QDialog
{
    Q_OBJECT

public:
    RegWindow(QWidget *parent = nullptr);

    ~RegWindow();

private slots:
    void on_CancleButton_clicked();

    void on_EmailEdit_editingFinished();

    void on_Password1Edit_textEdited(const QString &arg1);

    void on_Password2Edit_textEdited(const QString &arg1);

    void checkPasswords(QString& Password1, QString& Password2, QPushButton& SignInButton){
        if (!Password1.isEmpty() && !Password2.isEmpty() && !Email.isEmpty()){
            if (Password1 == Password2){
                SignInButton.setEnabled(true);

            }
        }
    }


    void on_SignInButton_clicked();

private:
    Ui::RegWindow *ui;
    QString Email;
    QString Password1;
    QString Password2;
};
#endif // REGWINDOW_H
