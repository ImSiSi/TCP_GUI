#ifndef TCP_H
#define TCP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TCP;
}
QT_END_NAMESPACE

class TCP : public QMainWindow
{
    Q_OBJECT

public:
    TCP(QWidget *parent = nullptr);
    ~TCP();

private:
    Ui::TCP *ui;
};
#endif // TCP_H
