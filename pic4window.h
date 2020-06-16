#ifndef PIC4WINDOW_H
#define PIC4WINDOW_H

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
class Pic4Window;
}

class Pic4Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pic4Window(QWidget *parent = nullptr);
    ~Pic4Window();

private:
    Ui::Pic4Window *ui;

private slots:
    void ReturnToMainWindow();
    void SavePic();
};

#endif // PIC4WINDOW_H
