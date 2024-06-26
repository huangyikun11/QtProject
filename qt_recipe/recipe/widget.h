#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <menu1.h>
#include <check.h>
#include <record.h>
#include <QString>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void showWidget();
    float all_heat=0;

private slots:
    void on_cancel_button_clicked();

    void on_browse_button_clicked();

    void on_search_button_clicked();

    void on_begin_button_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
