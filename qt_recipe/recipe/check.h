#ifndef CHECK_H
#define CHECK_H

#include <QWidget>
#include <widget.h>
#include <QString>
namespace Ui {
class check;
}

class check : public QWidget
{
    Q_OBJECT

public:
    explicit check(QWidget *parent = 0);
    ~check();
    float sum_value;   //总摄入量
    float aim_value;   //目标摄入量
    QString exp,exp2;
    Ui::check *ui;
private slots:
    void on_close_clicked();

    void on_done_clicked();

private:

};

#endif // CHECK_H
