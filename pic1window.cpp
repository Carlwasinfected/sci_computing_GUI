#include "pic1window.h"
#include "ui_pic1window.h"

Pic1Window::Pic1Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pic1Window)
{
    ui->setupUi(this);
    this->setWindowTitle("地震地区分布占比查询");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));

    // 读取图片路径并转换为HTML文本
    QString path = QString("../resource/img/pic1.png");
    path = QString("<img src=\"%1\"/>").arg(path);
    qDebug() << "imgHtmlPath: " << path << endl;
    ui->textBrowser->insertHtml(path);

    // binding
    connect(ui->pushbutton_return, SIGNAL(clicked()), this, SLOT(ReturnToMainWindow()));
    connect(ui->pushbutton_save, SIGNAL(clicked()), this, SLOT(SavePic()));
}

Pic1Window::~Pic1Window()
{
    delete ui;
}

/* 保存历史记录查询结果为pdf文件*/
void Pic1Window::SavePic() {
    //获取用户选定的文件保存路径
    QString save_filename = QFileDialog::getSaveFileName(this, tr("保存结果为PDF文件"), "",  tr("History Result File (*.pdf)"));

    if(!save_filename.isNull()) {
        qDebug() << "save here: " << save_filename;

        // tbd
        QString html = ui->textBrowser->toHtml();
        QTextDocument document;
        document.setHtml(html);

        // 设置printer输出格式为pdf
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(save_filename);
        // 生成.pdf文件
        document.print(&printer);

    } else {
        qDebug() << "click cancel button";
    }
}

void Pic1Window::ReturnToMainWindow() {
    GlobalVal::mw->show();
    GlobalVal::my_player->play();
    this->close();
}
