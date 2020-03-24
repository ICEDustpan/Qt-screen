#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <pic.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    Images_Change ic ;
    ~MainWindow();

private slots:
    void on_bt_picture_next_clicked();

    void on_bt_screen_quit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
