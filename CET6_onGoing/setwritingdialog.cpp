#include "setwritingdialog.h"
#include "ui_setwritingdialog.h"

setwritingDialog::setwritingDialog(float *writing, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setwritingDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    this->setWindowTitle(QStringLiteral("设置默认写作分数"));
    this->writing=writing;
}

setwritingDialog::~setwritingDialog()
{
    delete ui;
}

void setwritingDialog::on_setwritingDialog_accepted()
{
    *writing=ui->lineEdit1->text().toFloat()+ui->lineEdit_2->text().toFloat();
}
