#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include "globalval.h"

namespace Ui {
class logindialog;
}

class logindialog : public QDialog
{
    Q_OBJECT

public:
    explicit logindialog(QWidget *parent = nullptr);
    ~logindialog();

private:
    Ui::logindialog *ui;


public slots:
    void CheckInputValid();
};

#endif // LOGINDIALOG_H
