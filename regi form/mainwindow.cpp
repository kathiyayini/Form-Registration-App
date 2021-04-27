#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QValidator>

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


void MainWindow::on_pushButton_clicked()
{
        QMessageBox::information(this,"kathiyayini","Submitted succesfully");
}

void MainWindow::on_lineEdit_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_-]+@[a-zA-Z0-9-]+$");
       QRegularExpressionMatch match = re.match(ui->lineEdit_3->text());
       bool hasMatch = match.hasMatch();
       if (!hasMatch)
       {
          QMessageBox::information(this,"kayhiyayini","Invalid name");
       }
}

void MainWindow::on_lineEdit_3_returnPressed()
{
    if(ui->lineEdit_6->text().length()>10)
               QMessageBox::information(this,"kathiyayini","enter valid numer");
}
