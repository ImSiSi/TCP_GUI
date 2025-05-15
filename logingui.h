#ifndef LOGINGUI_H
#define LOGINGUI_H

#include "tcp.h"
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui {
class loginGUI;
}
QT_END_NAMESPACE

class loginGUI : public QMainWindow
{
    Q_OBJECT

public:
    loginGUI(QWidget *parent = nullptr);
    ~loginGUI();
    TCP tcp;

private slots:
    void on_signIn_clicked();

private:
    Ui::loginGUI * ui;
};
#endif // LOGINGUI_H
