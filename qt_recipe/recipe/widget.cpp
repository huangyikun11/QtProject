#include "widget.h"
#include "ui_widget.h"
#include "ui_check.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connet(ui->cancel_button,&QPushButton::clicked,this,&Widget::on_cancel_button_clicked);
    connet(ui->browse_button,&QPushButton::clicked,this,&Widget::on_browse_button_clicked);
    connet(ui->begin_button,&QPushButton::clicked,this,&Widget::on_begin_button_clicked);
    connet(ui->search_button,&QPushButton::clicked,this,&Widget::on_search_button_clicked);
}

void Widget::showWidget()
{
    this->show();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_cancel_button_clicked()
{
    this->close();
}

void Widget::on_browse_button_clicked()
{
    menu1 m;
    m.show();
    this->close();
}

void Widget::on_search_button_clicked()
{
    check cc;
    cc.sum_value=this->all_heat;    //传值
    cc.show();
    cc.exp=QString::number(cc.sum_value);
    cc.ui->output->setText(exp);
    this->close();
}

void Widget::on_begin_button_clicked()
{
    record r;
    r.sum=this->all_heat;        //传值  保存
    r.show();
    this->close();
}
