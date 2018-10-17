#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "greeter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    greeter= new Greeter(this);
    ui->setupUi(this);
    connect(ui->greetingLine,SIGNAL(textEdited(QString)),
            greeter,SLOT(greetingLineTextEdited(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Szia neked is köcsög!");
}*/
