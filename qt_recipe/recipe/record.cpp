#include "record.h"
#include "ui_record.h"
#include <QString>

record::record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
    connet(ui->done,&QPushButton::clicked,this,&record::on_done_clicked);
    connet(ui->close,&QPushButton::clicked,this,&record::on_close_clicked);
    connet(ui->back,&QPushButton::clicked,this,&record::on_back_clicked);
    connet(ui->browse,&QPushButton::clicked,this,&record::on_browse_clicked);
}

record::~record()
{
    delete ui;
}

void record::on_done_clicked()        //加法记录热量
{
    QString text1 = ui->number->text();         //检查是否为合法输入
    QString text2 = ui->piece->text();

    bool ok1,ok2;
    double fvalue1=text1.toDouble(&ok1);
    double fvalue2=text2.toDouble(&ok2);

    if(ok1&&ok2){                   //sum记录总摄入热量，转换为qstring类型后输出，并且在错误输入时报错
        switch (fvalue1) {
        case 1:
            fvalue1=30;
            break;

        case 2:
            fvalue1=238;
            break;

        case 3:
            fvalue1=228.4;
            break;

        case 4:
            fvalue1=33;
            break;

        case 5:
            fvalue1=24.9;
            break;

        case 6:
            fvalue1=143;
            break;

        case 7:
            fvalue1=117;
            break;

        case 8:
            fvalue1=38;
            break;

        case 9:
            fvalue1=32;
            break;

        case 10:
            fvalue1=20.9;
            break;

        case 11:
            fvalue1=104;
            break;

        case 12:
            fvalue1=27;
            break;

        case 13:
            fvalue1=44.9;
            break;

        case 14:
            fvalue1=70;
            break;

        case 15:
            fvalue1=86;
            break;

        case 16:
            fvalue1=282.5;
            break;

        case 17:
            fvalue1=54;
            break;

        case 18:
            fvalue1=24;
            break;

        case 19:
            fvalue1=134;
            break;

        case 20:
            fvalue1=58.4;
            break;

        case 21:
            fvalue1=93.1;
            break;

        case 22:
            fvalue1=97.8;
            break;

        case 23:
            fvalue1=137;
            break;

        case 24:
            fvalue1=187;
            break;

        case 25:
            fvalue1=148.2;
            break;

        case 26:
            fvalue1=93.7;
            break;

        case 27:
            fvalue1=181.5;
            break;

        case 28:
            fvalue1=68;
            break;

        case 29:
            fvalue1=67.9;
            break;

        case 30:
            fvalue1=75.4;
            break;

        case 31:
            fvalue1=126.8;
            break;

        case 32:
            fvalue1=150.7;
            break;

        case 33:
            fvalue1=92.5;
            break;

        case 34:
            fvalue1=136.5;
            break;

        case 35:
            fvalue1=63.3;
            break;

        case 36:
            fvalue1=98;
            break;

        case 37:
            fvalue1=156;
            break;

        case 38:
            fvalue1=126;
            break;

        case 39:
            fvalue1=42.7;
            break;

        case 40:
            fvalue1=126;
            break;

        default:
            fvalue1=-1;
            break;
        }
        if(fvalue1){       // 防止输入图鉴以外的编号
            sum -= fvalue1*fvalue2;
            expression = QString::number(sum);
        }
        else expression = "wrong input";
        ui->output->setText(expression);
    }else{
        expression = "wrong input";
        ui->output->setText(expression);
    }
}

void record::on_close_clicked()        //关闭
{
    Widget w;
    w.all_heat=this->sum;         //传值  保存
    w.show();
    this->close();
}

void record::on_back_clicked()          //与记录食物实现方式相同，只不过改为‘-=’
{
    QString text1 = ui->number->text();         //检查是否为合法输入
    QString text2 = ui->piece->text();

    bool ok1,ok2;
    double fvalue1=text1.toDouble(&ok1);
    double fvalue2=text2.toDouble(&ok2);

    if(ok1&&ok2){                   //总摄入热量sum减去要删除的食物，转换为qstring类型后输出，并且在错误输入时报错
        switch (fvalue1) {
        case 1:
            fvalue1=30;
            break;

        case 2:
            fvalue1=238;
            break;

        case 3:
            fvalue1=228.4;
            break;

        case 4:
            fvalue1=33;
            break;

        case 5:
            fvalue1=24.9;
            break;

        case 6:
            fvalue1=143;
            break;

        case 7:
            fvalue1=117;
            break;

        case 8:
            fvalue1=38;
            break;

        case 9:
            fvalue1=32;
            break;

        case 10:
            fvalue1=20.9;
            break;

        case 11:
            fvalue1=104;
            break;

        case 12:
            fvalue1=27;
            break;

        case 13:
            fvalue1=44.9;
            break;

        case 14:
            fvalue1=70;
            break;

        case 15:
            fvalue1=86;
            break;

        case 16:
            fvalue1=282.5;
            break;

        case 17:
            fvalue1=54;
            break;

        case 18:
            fvalue1=24;
            break;

        case 19:
            fvalue1=134;
            break;

        case 20:
            fvalue1=58.4;
            break;

        case 21:
            fvalue1=93.1;
            break;

        case 22:
            fvalue1=97.8;
            break;

        case 23:
            fvalue1=137;
            break;

        case 24:
            fvalue1=187;
            break;

        case 25:
            fvalue1=148.2;
            break;

        case 26:
            fvalue1=93.7;
            break;

        case 27:
            fvalue1=181.5;
            break;

        case 28:
            fvalue1=68;
            break;

        case 29:
            fvalue1=67.9;
            break;

        case 30:
            fvalue1=75.4;
            break;

        case 31:
            fvalue1=126.8;
            break;

        case 32:
            fvalue1=150.7;
            break;

        case 33:
            fvalue1=92.5;
            break;

        case 34:
            fvalue1=136.5;
            break;

        case 35:
            fvalue1=63.3;
            break;

        case 36:
            fvalue1=98;
            break;

        case 37:
            fvalue1=156;
            break;

        case 38:
            fvalue1=126;
            break;

        case 39:
            fvalue1=42.7;
            break;

        case 40:
            fvalue1=126;
            break;

        default:
            fvalue1=-1;
            break;
        }
        if(fvalue1){
            sum -= fvalue1*fvalue2;
            expression = QString::number(sum);
        }
        else expression = "wrong input";
        ui->output->setText(expression);
    }else{
        expression = "wrong input";
        ui->output->setText(expression);
    }
}

void record::on_browse_clicked()
{
    menu1 mm;
    mm.show();
    mm.Tagg=-1;       //用来解决menu1关闭时会打开主页widget的问题
}
