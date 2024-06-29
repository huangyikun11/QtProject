/********************************************************************************
** Form generated from reading UI file 'tianjiadongzuo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIANJIADONGZUO_H
#define UI_TIANJIADONGZUO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tianjiadongzuo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tianjiadongzuo)
    {
        if (tianjiadongzuo->objectName().isEmpty())
            tianjiadongzuo->setObjectName("tianjiadongzuo");
        tianjiadongzuo->resize(362, 110);
        verticalLayout = new QVBoxLayout(tianjiadongzuo);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(tianjiadongzuo);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(tianjiadongzuo);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(tianjiadongzuo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(tianjiadongzuo);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, tianjiadongzuo, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, tianjiadongzuo, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(tianjiadongzuo);
    } // setupUi

    void retranslateUi(QDialog *tianjiadongzuo)
    {
        tianjiadongzuo->setWindowTitle(QCoreApplication::translate("tianjiadongzuo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tianjiadongzuo", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\212\250\344\275\234\345\220\215</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tianjiadongzuo: public Ui_tianjiadongzuo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIANJIADONGZUO_H
