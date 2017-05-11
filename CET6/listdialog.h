#ifndef LISTDIALOG_H
#define LISTDIALOG_H

#include <QDialog>
#include"Stu.h"

namespace Ui {
class listDialog;
}

class listDialog : public QDialog
{
    Q_OBJECT

public:
    explicit listDialog(Queue* pq,QWidget *parent = 0);
    ~listDialog();

private slots:
    void on_outport_clicked();

private:
    Ui::listDialog *ui;
};

#endif // LISTDIALOG_H
