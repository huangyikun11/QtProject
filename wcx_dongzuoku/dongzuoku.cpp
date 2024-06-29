#include "dongzuoku.h"
#include "ui_dongzuoku.h"
#include <QInputDialog>

dongzuoku::dongzuoku(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dongzuoku)
{
    ui->setupUi(this);
    connect(ui->addNewAction,SIGNAL(clicked()),this,SLOT(addNewActionclicked()));
    ui->actions->setColumnWidth(0,200);
    QTreeWidgetItemIterator it(ui->actions);
    while(*it){
        (*it)->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable|Qt::ItemIsEnabled | Qt::ItemIsAutoTristate|Qt::ItemIsEditable);
        it++;
    }
    connect(ui->actions,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),ui->actions,SLOT(editItem()));
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

