#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGameInfoText("Select duration", 15);
}

MainWindow::~MainWindow()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1){
        if(player1Time != 0){
            player1Time = player1Time - 1;
            ui->Player1ProgressBar->setValue(player1Time);
        }else{
            ui->label->setText("Player 1 loses. Perss 'END GAME' to play again");
        }
    }else{
        if(player2Time != 0){
            player2Time = player2Time - 1;
            ui->Player2ProgressBar->setValue(player2Time);
        }else{
            ui->label->setText("Player 2 loses. Press 'END GAME' to play again");
        }
    }
}

void MainWindow::on_Player1Swich_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_Player2Swich_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_Sec120_clicked()
{
    if(gameTime != 0){
        gameTime = 120;
    }else{
        gameTime = 120;
        tila++;
        setGameInfoText("Start the game or change game duration", 15);
    }
}


void MainWindow::on_Min5_clicked()
{
    if(gameTime != 0){
        gameTime = 300;
    }else{
        gameTime = 300;
        tila++;
        setGameInfoText("Start the game or change game duration", 15);
    }
}


void MainWindow::on_Start_clicked()
{
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;
    ui->Player1ProgressBar->setRange(0,gameTime);
    ui->Player2ProgressBar->setRange(0,gameTime);
    ui->Player1ProgressBar->setValue(gameTime);
    ui->Player2ProgressBar->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();
    tila++;
    setGameInfoText("Game ongoing", 25);
}


void MainWindow::on_End_clicked()
{
    timer->stop();
    delete timer;
    timer = nullptr;
    gameTime = 0;
    tila = 1;
    setGameInfoText("Select duration", 15);
}

void MainWindow::setGameInfoText(QString title, short f)
{
    if(tila == 1){
        ui->Sec120->setEnabled(true);
        ui->Min5->setEnabled(true);
        ui->Start->setEnabled(false);
        ui->End->setEnabled(false);
        ui->Player1Swich->setEnabled(false);
        ui->Player2Swich->setEnabled(false);
        QFont font = ui->label->font();
        font.setPointSize(f);
        ui->label->setFont(font);
        ui->label->setText(title);
    }else if(tila == 2){
        ui->Player1ProgressBar->setValue(gameTime);
        ui->Player2ProgressBar->setValue(gameTime);
        ui->Sec120->setEnabled(true);
        ui->Min5->setEnabled(true);
        ui->Start->setEnabled(true);
        ui->End->setEnabled(false);
        ui->Player1Swich->setEnabled(false);
        ui->Player2Swich->setEnabled(false);
        QFont font = ui->label->font();
        font.setPointSize(f);
        ui->label->setFont(font);
        ui->label->setText(title);
    }else if(tila == 3){
        ui->Sec120->setEnabled(false);
        ui->Min5->setEnabled(false);
        ui->Start->setEnabled(false);
        ui->End->setEnabled(true);
        ui->Player1Swich->setEnabled(true);
        ui->Player2Swich->setEnabled(true);
        QFont font = ui->label->font();
        font.setPointSize(f);
        ui->label->setFont(font);
        ui->label->setText(title);
    }
}

