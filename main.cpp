#include "tcp.h"
#include "logingui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginGUI w;
    w.show();
    return a.exec();
}
