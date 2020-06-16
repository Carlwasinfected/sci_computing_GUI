#ifndef PIC2WINDOW_H
#define PIC2WINDOW_H

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
class Pic2Window;
}

class Pic2Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pic2Window(QWidget *parent = nullptr);
    ~Pic2Window();

private:
    Ui::Pic2Window *ui;

private slots:
    void ReturnToMainWindow();
    void SavePic();
};

#endif // PIC2WINDOW_H
