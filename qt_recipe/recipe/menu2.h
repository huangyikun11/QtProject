#ifndef MENU2_H
#define MENU2_H

#include <QWidget>
#include <menu1.h>
#include <widget.h>

namespace Ui {
class menu2;
}

class menu2 : public QWidget
{
    Q_OBJECT

public:
    explicit menu2(QWidget *parent = 0);
    ~menu2();
    int Tagg2=0;

private slots:
    void on_last_page_clicked();

    void on_close_clicked();

private:
    Ui::menu2 *ui;
};

#endif // MENU2_H
