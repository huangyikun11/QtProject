#include "menu2.h"
#include "ui_menu2.h"

menu2::menu2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu2)
{
    ui->setupUi(this);
    connet(ui->last_page,&QPushButton::clicked,this,&menu2::on_last_page_clicked);
    connet(ui->close,&QPushButton::clicked,this,&menu2::on_close_clicked);
}

menu2::~menu2()
{
    delete ui;
}

void menu2::on_last_page_clicked()
{
    if(Tagg2==-1) ;     //扩展更多图鉴页
    menu1 m;
    m.show();
    this->close();
}

void menu2::on_close_clicked()
{
    if(Tagg2!=-1){          //同理防止多开
        Widget w;
        w.show();
    }
    this->close();
}
