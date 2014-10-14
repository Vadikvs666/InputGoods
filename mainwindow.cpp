#include "mainwindow.h"
#include "listorg.h"
#include "vsite.h"
#include "ui_mainwindow.h"
#include "QFile.h"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);






}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CloseButton_clicked()
{
    emit goodbuy();
    this->close();

}



void MainWindow::on_SearchGoods_clicked()
{
    SearchPost *widget;
    widget =new  SearchPost;
    QObject::connect(this,SIGNAL(goodbuy()),widget,SLOT(CloseSend()));
    widget->show();
}

void MainWindow::on_VSiteButton_clicked()
{
    VSite *widget;
    widget =new  VSite;
    QObject::connect(this,SIGNAL(goodbuy()),widget,SLOT(CloseSend()));
    widget->show();
}
