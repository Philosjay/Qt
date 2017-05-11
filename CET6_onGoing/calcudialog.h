#ifndef CALCUDIALOG_H
#define CALCUDIALOG_H

#include <QDialog>
#include"Stu.h"

namespace Ui {
class calcuDialog;
}

class calcuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit calcuDialog(float* writing,Stu* pt,QWidget *parent = 0);
    ~calcuDialog();

    void calculate();


private slots:
    void on_yespushButton_clicked();

    void on_setpushButton_clicked();

private:
    Ui::calcuDialog *ui;
    Stu* pt;
};

#endif // CALCUDIALOG_H
