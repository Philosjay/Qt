#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include"Stu.h"

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(float *writing, Queue* pq,QWidget *parent = 0);
    ~addDialog();


private slots:
    void on_yesButton_clicked();

    void on_calculatepushButton_clicked();

private:
    Ui::addDialog *ui;
    Queue* pq;
    Stu* temp;  //此临时Stu用于添加时，在与calcu窗口间传递分数信息
    float* writing;
};

#endif // ADDDIALOG_H
