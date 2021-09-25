#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include <QMessageBox>
#include <QLocale>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

Model model_progress;

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_number7_clicked()
{
    model_progress.enter_store("7");
}


void MainWindow::on_number8_clicked()
{
    model_progress.enter_store("8");
}


void MainWindow::on_number9_clicked()
{
    model_progress.enter_store("9");
}


void MainWindow::on_number4_clicked()
{
    model_progress.enter_store("4");
}


void MainWindow::on_number5_clicked()
{
    model_progress.enter_store("5");
}


void MainWindow::on_number6_clicked()
{
    model_progress.enter_store("6");
}


void MainWindow::on_number1_clicked()
{
    model_progress.enter_store("1");
}


void MainWindow::on_number2_clicked()
{
    model_progress.enter_store("2");
}


void MainWindow::on_number3_clicked()
{
    model_progress.enter_store("3");
}


void MainWindow::on_numberzero_clicked()
{
    model_progress.enter_store("0");
    QMessageBox::about(this, "title", model_progress.store);
}


void MainWindow::on_equal_clicked()
{
    int store;
    int prev;
    if(model_progress.pair_add.second) {
        store = model_progress.store.toInt();
        prev = model_progress.prev.toInt();
        model_progress.result = QString::number(store + prev);
        model_progress.pair_add.second = 0;
    }
    else if (model_progress.pair_minous.second) {
        store = model_progress.store.toInt();
        prev = model_progress.prev.toInt();
        model_progress.result = QString::number(prev - store);
        model_progress.pair_minous.second = 0;
    }
    else if(model_progress.pair_multi.second) {
        store = model_progress.store.toInt();
        prev = model_progress.prev.toInt();
        model_progress.result = QString::number(prev * store);
        model_progress.pair_multi.second = 0;
    }
    else if (model_progress.pair_divide.second) {
        store = model_progress.store.toInt();
        prev = model_progress.prev.toInt();
        model_progress.result = QString::number(prev / store);
        model_progress.pair_divide.second = 0;
    }
    QMessageBox::about(this, "result", model_progress.result);
    model_progress.store = model_progress.result;
}


void MainWindow::on_add_clicked()
{
    model_progress.add();
}


void MainWindow::on_minous_clicked()
{
    model_progress.minous();
}


void MainWindow::on_multil_clicked()
{
    model_progress.multil();
}


void MainWindow::on_divide_clicked()
{
    model_progress.divide();
}


void MainWindow::on_invert_clicked()
{
    model_progress.invert();
    QMessageBox::about(this, "result", model_progress.store);
}


void MainWindow::on_square_clicked()
{
    model_progress.square();
    QMessageBox::about(this, "result", model_progress.store);
}


void MainWindow::on_sqrt_clicked()
{
    model_progress.sqrt();
    QMessageBox::about(this, "result", model_progress.store);
}

