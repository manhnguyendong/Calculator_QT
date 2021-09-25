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

private slots:
    void on_number7_clicked();

    void on_number8_clicked();

    void on_number9_clicked();

    void on_number4_clicked();

    void on_number5_clicked();

    void on_number6_clicked();

    void on_number1_clicked();

    void on_number2_clicked();

    void on_number3_clicked();

    void on_numberzero_clicked();

    void on_equal_clicked();

    void on_add_clicked();

    void on_minous_clicked();

    void on_multil_clicked();

    void on_divide_clicked();

    void on_invert_clicked();

    void on_square_clicked();

    void on_sqrt_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
