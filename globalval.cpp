#include "globalval.h"

GlobalVal::GlobalVal()
{

}

GlobalVal::~GlobalVal() {

}


// init global variables
QMainWindow* GlobalVal::mw = NULL;
QString GlobalVal::cur_username = "Error User";
QMediaPlayer* GlobalVal::my_player = NULL;



