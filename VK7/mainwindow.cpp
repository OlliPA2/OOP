#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaaNappi_clicked()
{
    QString str = ui ->numeroNaytto->text();
    int num = str.toInt();
    num++;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}


void MainWindow::on_ResetNappi_clicked()
{
    ui->numeroNaytto->setText("0");
}

