#ifndef PIC3WINDOW_H
#define PIC3WINDOW_H

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
class Pic3Window;
}

class Pic3Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pic3Window(QWidget *parent = nullptr);
    ~Pic3Window();

private:
    Ui::Pic3Window *ui;

private slots:
    void ReturnToMainWindow();
    void SavePic();
};

#endif // PIC3WINDOW_H
