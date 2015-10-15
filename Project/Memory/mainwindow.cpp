#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setFixedSize(500,500);
    this->setStyleSheet("QMainWindow {background-color: #5555ff;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_actionLoad_triggered()
{
    QMessageBox::information(this,"title","Hello");
}

void MainWindow::on_actionClose_triggered()
{
    QMessageBox closeBox;
    closeBox.setText("Are you sure?");
    closeBox.setInformativeText("You will lose your progress.");
    closeBox.addButton(QMessageBox::Close);
    closeBox.addButton(QMessageBox::Cancel);
    closeBox.setDefaultButton(QMessageBox::Cancel);
    int ret = closeBox.exec();
    switch(ret){
        case QMessageBox::Close:
            close();
            break;
        case QMessageBox::Cancel:
            break;
        default:
            break;
    }
}


