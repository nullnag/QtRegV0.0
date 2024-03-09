#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:
    void on_LoginBoxR_textEdited(const QString &arg1);

    void button_activateR(bool& loginPass,bool& passwordPass);

    void on_PasswordBoxR_textChanged(const QString &arg1);

    void on_RegButton_clicked();

private:
    bool passwordPassR = 0;
    bool loginPassR = 0;
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
