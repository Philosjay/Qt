#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>
#include"Stu.h"

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(Stu *pt, QWidget *parent = 0);
    ~infoDialog();

private:
    Ui::infoDialog *ui;
    Stu* pt;
};

#endif // INFODIALOG_H
