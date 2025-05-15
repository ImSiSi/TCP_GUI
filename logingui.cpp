#include "logingui.h"
#include "./ui_logingui.h"

loginGUI::loginGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginGUI)
{
    ui->setupUi(this);
    this->setWindowTitle("TCP Login");
    ui->passwordText->setEchoMode(QLineEdit::Password);
}

loginGUI::~loginGUI()
{
    delete ui;
}


void loginGUI::on_signIn_clicked()
{
    if(ui->accountText->text() == "80919si" && ui->passwordText->text() == "qwqw60109"){
        QMessageBox::information(this, "Message", "Login successfully");
        tcp.show();

    }
    else{
        QMessageBox::information(this, "Message", "Login failed");
    }
}

