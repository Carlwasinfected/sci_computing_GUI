#include "mainwindow.h"
#include "ui_mainwindow.h"
/* friend function */
/* 获取当前登录者的用户名*/
std::string GetMsgFromLogin() {
    std::string username = GlobalVal::cur_username.toStdString();
    qDebug() << "cur_username from MainWindow: " << GlobalVal::cur_username;
    std :: string msg = "";
    msg += "<h4>用户<font color = red>";
    msg += username;
    msg += "</font> ，欢迎您！</h4>";
    return msg;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "construction of MainWindow here" << endl;
       // 初始化ui
       this->setWindowTitle("地震爬虫可视化查询系统");
       this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
       ui->welcomeMsg->setText(QString::fromStdString(GetMsgFromLogin()));
       ui->label->setText(tr("<h4><font color=blue> 地震知识小科普</font></h4>"));

       // 添加视频、多媒体播放列表控件
       QMediaPlayer *player = new QMediaPlayer;
       QMediaPlaylist *playlist = new QMediaPlaylist(player);
       QVideoWidget *videoWidget = new QVideoWidget;

       // 满layout播放
       videoWidget->setAspectRatioMode(Qt::IgnoreAspectRatio);
       player->setVideoOutput(videoWidget);
       playlist->addMedia(QUrl::fromLocalFile("../resource/video/about_earthquake.mp4"));
       player->setPlaylist(playlist);

       // 设置视频控件的位置
       ui->horizontalLayoutRight->addWidget(videoWidget);
       videoWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
       videoWidget->show();
       videoWidget->showFullScreen();
       player->play();
       qDebug() << videoWidget->size();

       // 将播放列表设为全局变量
       GlobalVal::my_player = player;

       // 定义信号和槽函数
       connect(ui->pb_pic1, SIGNAL(clicked()), this, SLOT(ShowPic1()));
       connect(ui->pb_pic2, SIGNAL(clicked()), this, SLOT(ShowPic2()));
       connect(ui->pb_pic3, SIGNAL(clicked()), this, SLOT(ShowPic3()));
       connect(ui->pb_pic4, SIGNAL(clicked()), this, SLOT(ShowPic4()));
       connect(ui->pb_pic5, SIGNAL(clicked()), this, SLOT(ShowPic5()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



// SLOTS FUNCTIONS
void MainWindow::ShowPic1() {
    Pic1Window* pic1_win = new Pic1Window();
    pic1_win->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowPic2() {
    Pic2Window* pic2_win = new Pic2Window();
    pic2_win->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowPic3() {
    Pic3Window* pic3_win = new Pic3Window();
    pic3_win->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowPic4() {
    Pic4Window* pic4_win = new Pic4Window();
    pic4_win->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowPic5() {
    Pic5Window* pic5_win = new Pic5Window();
    pic5_win->show();
    GlobalVal::my_player->pause();
    this->hide();
}


