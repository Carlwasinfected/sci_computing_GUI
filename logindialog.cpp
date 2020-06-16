#include "logindialog.h"
#include "ui_logindialog.h"

logindialog::logindialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logindialog)
{
    ui->setupUi(this);

    this->setWindowTitle("地震爬虫可视化系统");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));

    // bind singals and slots
    connect(ui->Login_Button_2, SIGNAL(clicked()), this, SLOT(CheckInputValid()));
}

logindialog::~logindialog()
{
    delete ui;
}



// SLOT FUNCTION
void logindialog::CheckInputValid() {
    // check username&password is valid or not
    if (ui->UserNames_2->text().toStdString() == "carlwang99" && ui->PassWords_2->text().toStdString() == "123") {
        GlobalVal::cur_username = ui->UserNames_2->text();
        GlobalVal::mw = new MainWindow();
        GlobalVal::mw->show();
        qDebug() << "cur_username from LoginWindow: " << GlobalVal::cur_username;
        qDebug() << "sucessfully login from LoginDialog.cpp" << endl;
        this->close();
    } else {
        int ret = QMessageBox::warning(NULL,tr("登录错误"), tr("您输入的账号或者密码不正确！"),
                                       QMessageBox::Ok,QMessageBox::Cancel, 0);
        switch (ret) {
          case QMessageBox::Ok:
              // Ok was clicked
            qDebug() << "clear op finished" << endl;
              break;
          case QMessageBox::Cancel:
              // Cancel was clicked
            qDebug() << "cancel button was clicked" << endl;
              break;
        }
    }
}
