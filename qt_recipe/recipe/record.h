#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QString>
#include <menu1.h>
#include <widget.h>
namespace Ui {
class record;
}

class record : public QWidget
{
    Q_OBJECT

public:
    explicit record(QWidget *parent = 0);
    ~record();

private slots:
    void on_done_clicked();

    void on_close_clicked();

    void on_back_clicked();

    void on_browse_clicked();

private:
    Ui::record *ui;
    float sum=0;
    QString expression;
};

#endif // RECORD_H
