#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//跳转到下一张图片
void MainWindow::on_bt_picture_next_clicked()
{
    QPixmap pixmap(ic.NextImage());
    ui->label->setPixmap(pixmap);
    ui->label->show();
}

void MainWindow::on_bt_screen_quit_clicked()
{
    //结束程序 退出窗口
    QApplication* app;
    app->quit();
}
