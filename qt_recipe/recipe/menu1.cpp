#include "menu1.h"
#include "ui_menu1.h"

menu1::menu1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu1)
{
    ui->setupUi(this);
    connet(ui->close,&QPushButton::clicked,this,&menu1::on_close_clicked);
    connet(ui->next_page,&QPushButton::clicked,this,&menu1::on_next_page_clicked);
}

menu1::~menu1()
{
    delete ui;
}

void menu1::on_close_clicked()
{
    if(Tagg!=-1){             //Tagg初始值为0，一般情况下不会影响，当在记录界面查看图鉴时，Tagg作为标记可以防止重复打开widget主页面
        Widget w;
        w.show();
    }
    this->close();
}

void menu1::on_next_page_clicked()
{
    menu2 mm;
    mm.show();
    if(Tagg==-1)mm.Tagg2=-1;   //同理，标签判断
    this->close();
}
