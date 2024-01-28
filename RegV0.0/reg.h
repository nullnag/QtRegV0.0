#ifndef REG_H
#define REG_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class Reg;
}
QT_END_NAMESPACE

class Reg : public QMainWindow
{
    Q_OBJECT

public:
    Reg(QWidget *parent = nullptr);
    ~Reg();

private:
    Ui::Reg *ui;
};
#endif // REG_H
