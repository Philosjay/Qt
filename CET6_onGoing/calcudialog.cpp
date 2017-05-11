#include "calcudialog.h"
#include "ui_calcudialog.h"
#include"CET6.h"
#include"Stu.h"
#include<QString>


calcuDialog::calcuDialog(float *writing, Stu*pt, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calcuDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    QString n=pt->name;
    this->pt=pt;
    this->setWindowTitle(QStringLiteral("换算分数"));
    ui->writingLineEdit->setText(QString::number(*writing));
    ui->writingLineEdit->setEnabled(false);
}
calcuDialog::~calcuDialog()
{
    delete ui;
}

void calcuDialog::calculate()
{
    QString n1,n2,n3,n4,n5;
    n1=ui->lineEdit->text();
    n2=ui->lineEdit_2->text();
    n3= ui->lineEdit_3->text();
    n4=ui->lineEdit_4->text();
    n5=ui->writingLineEdit->text();

    pt->score=CET6(n1.toInt(),n2.toInt(),n3.toInt(),n4.toInt(),n5.toFloat());
}

void calcuDialog::on_yespushButton_clicked()
{
    calculate();
}


void calcuDialog::on_setpushButton_clicked()
{
    ui->writingLineEdit->setEnabled(true);
}
