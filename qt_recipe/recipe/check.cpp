#include "check.h"
#include "ui_check.h"

check::check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::check)
{
    ui->setupUi(this);
    connet(ui->close,&QPushButton::clicked,this,&check::on_close_clicked);
    connet(ui->done,&QPushButton::clicked,this,&check::on_done_clicked);
}

check::~check()
{
    delete ui;
}

void check::on_close_clicked()
{
    Widget w;
    w.all_heat=this->sum_value;
    w.show();
    this->close();

}

void check::on_done_clicked()
{
    QString text = ui->aim->text();
    bool ok1;
    double fvalue1=text.toDouble(&ok1);
    fvalue1-=sum_value;
    if(fvalue1)exp2="还可以吃喔";
    else exp2="已经超过上限，建议运动";
    ui->aim->setText(exp2);
}
