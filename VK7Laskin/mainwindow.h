#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_Plus_clicked();

    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_EnterNappi_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_N0_clicked();

    void on_Sub_clicked();

    void on_Mul_clicked();

    void on_Div_clicked();

    void on_ClearNappi_clicked();

private:
    void numberClickHandler(int n);
    void setActiveControls();
    Ui::MainWindow *ui;
    int tila = 1;
};
#endif // MAINWINDOW_H
