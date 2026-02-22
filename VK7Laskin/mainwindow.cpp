#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_Plus_clicked()
{
    if(tila==3){
        tila = 1;
        setActiveControls();

        QString num1str = ui ->num1->text();
        int num1 = num1str.toInt();
        QString num2str = ui ->num2->text();
        int num2 = num2str.toInt();

        int result = num1+num2;

        QString uusStr = QString::number(result);
        ui->result->setText(uusStr);

        tila = 1;
    }else{
        qDebug() << "Virhe: molempia numeroita ei syötetty.";
    }
}


void MainWindow::on_Sub_clicked()
{
    if(tila==3){
        tila = 1;
        setActiveControls();

        QString num1str = ui ->num1->text();
        int num1 = num1str.toInt();
        QString num2str = ui ->num2->text();
        int num2 = num2str.toInt();

        int result = num1-num2;

        QString uusStr = QString::number(result);
        ui->result->setText(uusStr);

        tila = 1;
    }else{
        qDebug() << "Virhe: molempia numeroita ei syötetty.";
    }
}


void MainWindow::on_Mul_clicked()
{
    if(tila==3){
        tila = 1;
        setActiveControls();

        QString num1str = ui ->num1->text();
        int num1 = num1str.toInt();
        QString num2str = ui ->num2->text();
        int num2 = num2str.toInt();

        int result = num1*num2;

        QString uusStr = QString::number(result);
        ui->result->setText(uusStr);

        tila = 1;
    }else{
        qDebug() << "Virhe: molempia numeroita ei syötetty.";
    }
}


void MainWindow::on_Div_clicked()
{
    if(tila==3){
        tila = 1;
        setActiveControls();

        QString num1str = ui ->num1->text();
        int num1 = num1str.toInt();
        QString num2str = ui ->num2->text();
        int num2 = num2str.toInt();

        int result = num1/num2;

        QString uusStr = QString::number(result);
        ui->result->setText(uusStr);

        tila = 1;
    }else{
        qDebug() << "Virhe: molempia numeroita ei syötetty.";
    }
}


void MainWindow::on_EnterNappi_clicked()
{
    if(tila == 3){
        tila = 3;
    }else{
        tila++;
    }
    qDebug() << "Tila: " << tila;
    setActiveControls();
}


void MainWindow::on_ClearNappi_clicked()
{
    tila = 1;
    ui->num1->setText(0);
    ui->num2->setText(0);
    ui->result->setText(0);
    setActiveControls();
}


void MainWindow::numberClickHandler(int n)
{
    qDebug() << "numero: " << n;
    QString str = QString::number(n);
    if(tila==1){
        ui->num1->setText(str);

    }
    else if(tila==2){
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if(tila == 1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Sub->setEnabled(false);
        ui->Mul->setEnabled(false);
        ui->Div->setEnabled(false);
    }else if(tila == 2){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Sub->setEnabled(false);
        ui->Mul->setEnabled(false);
        ui->Div->setEnabled(false);
    }else if(tila == 3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->Plus->setEnabled(true);
        ui->Sub->setEnabled(true);
        ui->Mul->setEnabled(true);
        ui->Div->setEnabled(true);
    }
}

