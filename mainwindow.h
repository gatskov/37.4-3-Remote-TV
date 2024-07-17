#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void set_one();
    void set_two();
    void set_three();
    void set_four();
    void set_five();
    void set_six();
    void set_seven();
    void set_eight();
    void set_nine();
    void set_zero();
    void volumeUp();
    void volumeDown();
    void channelPrev();
    void channelNext();


private:
    Ui::MainWindow *ui;
    int volume {20};
    int channel {0};
    void printScreen();
};

#endif // MAINWINDOW_H
