#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->page1);


    connect(ui->regist,ui->regist->clicked,ui->stackedWidget,[=](){
        ui->stackedWidget->setCurrentWidget(ui->page2);
        this->setWindowTitle("注册");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
