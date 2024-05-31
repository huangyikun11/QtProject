#include "dongzuoku.h"
#include "ui_dongzuoku.h"
#include <QInputDialog>

dongzuoku::dongzuoku(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dongzuoku)
{
    ui->setupUi(this);
    connect(ui->addNewAction,SIGNAL(clicked()),this,SLOT(addNewActionclicked()));
}

dongzuoku::~dongzuoku()
{
    delete ui;
}

void dongzuoku::addNewActionclicked()
{
    bool ok;
    QString text = QInputDialog::getText(this, "添加新动作", "请输入动作名称: ", QLineEdit::Normal, "", &ok);
    if (ok && !text.isEmpty()){
        QTreeWidgetItem *par;
        par=ui->actions->currentItem();
        if (par!=nullptr){
            QTreeWidgetItem *child = new QTreeWidgetItem;
            child->setText(0,text);
            par->addChild(child);
        }
    }
}

