#ifndef GLOBALVAL_H
#define GLOBALVAL_H

#include <QString>
#include "mainwindow.h"

class GlobalVal
{
public:
    GlobalVal();
    ~GlobalVal();

    static QMainWindow* mw; // pointer to mainwindow
    static QString cur_username;
    static QMediaPlayer* my_player;

};

#endif // GLOBALVAL_H
