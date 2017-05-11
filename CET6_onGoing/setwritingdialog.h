#ifndef SETWRITINGDIALOG_H
#define SETWRITINGDIALOG_H

#include <QDialog>

namespace Ui {
class setwritingDialog;
}

class setwritingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit setwritingDialog(float* writing,QWidget *parent = 0);
    ~setwritingDialog();

private slots:
    void on_setwritingDialog_accepted();

private:
    Ui::setwritingDialog *ui;
    float* writing;
};

#endif // SETWRITINGDIALOG_H
