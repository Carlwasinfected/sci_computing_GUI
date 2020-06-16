#ifndef PIC5WINDOW_H
#define PIC5WINDOW_H

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
class Pic5Window;
}

class Pic5Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pic5Window(QWidget *parent = nullptr);
    ~Pic5Window();

private:
    Ui::Pic5Window *ui;

private slots:
    void ReturnToMainWindow();
    void SavePic();
};

#endif // PIC5WINDOW_H
