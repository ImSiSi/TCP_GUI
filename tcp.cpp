#include "tcp.h"
#include "./ui_tcp.h"

TCP::TCP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TCP)
{
    ui->setupUi(this);
    this->setWindowTitle("TCP");
}

TCP::~TCP()
{
    delete ui;
}
