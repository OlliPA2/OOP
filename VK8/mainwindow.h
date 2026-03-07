#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeOut();

private slots:
    void updateProgressBar();

    void on_Player1Swich_clicked();

    void on_Player2Swich_clicked();

    void on_Sec120_clicked();

    void on_Min5_clicked();

    void on_Start_clicked();

    void on_End_clicked();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short gameTime = 0;
    short tila = 1;
    short currentPlayer = 1;
    QTimer *timer = nullptr;
    void setGameInfoText(QString title, short f);
};
#endif // MAINWINDOW_H
