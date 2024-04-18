#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <string>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DecimalToBinary)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int decimalNum;

string decimalToBinary(int n) {
    if(n == 0){
        return "0";
    }
    else {
    string binary;
    while(n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
    }
}

void MainWindow::on_enterButton_clicked()
{
    int decimal = ui->decimalNum->text().toInt();
    string binary = (decimalToBinary(decimal));
    ui->Result->setText(QString::fromStdString(binary));
}

