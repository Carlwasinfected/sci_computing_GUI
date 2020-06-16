#ifndef PIC1WINDOW_H
#define PIC1WINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QMainWindow>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include "globalval.h"

namespace Ui {
class Pic1Window;
}

class Pic1Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pic1Window(QWidget *parent = nullptr);
    ~Pic1Window();

private:
    Ui::Pic1Window *ui;

private slots:
    void ReturnToMainWindow();
    void SavePic();

};

#endif // PIC1WINDOW_H
