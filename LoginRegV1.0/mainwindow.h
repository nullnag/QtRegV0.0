#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <registration.h>
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


    void on_LoginBox_textEdited(const QString &arg1);

    void on_PasswordBox_textEdited(const QString &arg1);

    void button_activate(bool& loginPass,bool& passwordPass);

    void on_LogInButton_clicked();

    void on_RegButton_clicked();

private:
    bool loginPass = 0;
    bool passwordPass = 0;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
