#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    printScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_one()
{
    channel = 1;
    printScreen();
}

void MainWindow::set_two()
{
    channel = 2;
    printScreen();
}

void MainWindow::set_three()
{
    channel = 3;
    printScreen();
}

void MainWindow::set_four()
{
    channel = 4;
    printScreen();
}

void MainWindow::set_five()
{
    channel = 5;
    printScreen();
}

void MainWindow::set_six()
{
    channel = 6;
    printScreen();
}

void MainWindow::set_seven()
{
    channel = 7;
    printScreen();
}

void MainWindow::set_eight()
{
    channel = 8;
    printScreen();
}

void MainWindow::set_nine()
{
    channel = 9;
    printScreen();
}

void MainWindow::set_zero()
{
    channel = 0;
    printScreen();
}

void MainWindow::volumeUp()
{
    if (volume < 100) volume += 10;
    printScreen();
}

void MainWindow::volumeDown()
{
    if (volume > 0) volume -= 10;
    printScreen();
}

void MainWindow::channelPrev()
{
    if (channel > 0)
        --channel;
    else
        channel = 9;
    printScreen();
}

void MainWindow::channelNext()
{
    if (channel < 9)
        ++channel;
    else
        channel = 0;
    printScreen();
}

void MainWindow::printScreen()
{
    std::string chString = std::to_string(channel);
    std::string volString = std::to_string(volume);

    ui->display->setText("Ch: " + QString::fromStdString(chString) + " vol: " + QString::fromStdString(volString) + " %");
}
