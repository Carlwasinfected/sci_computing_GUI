#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QFont>
#include <QColor>
#include <QString>
#include "globalval.h"
#include "pic1window.h"
#include "pic2window.h"
#include "pic3window.h"
#include "pic4window.h"
#include "pic5window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* my_player;  // 视频播放列表


private slots:
    void ShowPic1();
    void ShowPic2();
    void ShowPic3();
    void ShowPic4();
    void ShowPic5();
};
#endif // MAINWINDOW_H
