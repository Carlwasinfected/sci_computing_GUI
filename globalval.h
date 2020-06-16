#ifndef GLOBALVAL_H
#define GLOBALVAL_H

#include <QString>
#include "mainwindow.h"

class GlobalVal
{
public:
    GlobalVal();
    ~GlobalVal();

    static MainWindow* mw; // pointer to mainwindow
    static QString cur_username;

};

#endif // GLOBALVAL_H
