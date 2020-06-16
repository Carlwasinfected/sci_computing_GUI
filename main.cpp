#include "mainwindow.h"
#include "logindialog.h"

#include <QApplication>
#include <QFile>

/* 设置样式表 */
static  void SetMyStyleSheet(const QString &styleName)
{
    QFile file(styleName);
    file.open(QFile::ReadOnly);
    QString css = QLatin1String(file.readAll());
    if(!file.exists()) {
        qDebug() << "No File Exits!";
    }
    qDebug() << file.fileName();
    qApp->setStyleSheet(css);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 设置应用程序的样式表
    SetMyStyleSheet("../resource/stylesheet/mystylesheet.css");
//    MainWindow w;
//    w.show();
    logindialog* lg = new logindialog();
    lg->show();
    return a.exec();
}
