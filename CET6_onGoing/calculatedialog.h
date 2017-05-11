#ifndef CALCULATEDIALOG_H
#define CALCULATEDIALOG_H

#include <QDialog>
#include"Stu.h"

namespace Ui {
class calculateDialog;
}

class calculateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit calculateDialog(Stu* pt,QWidget *parent = 0);
    ~calculateDialog();

private slots:
    void on_yespushButton_clicked();

private:
    Ui::calculateDialog *ui;
    Stu* pt;
};

#endif // CALCULATEDIALOG_H
