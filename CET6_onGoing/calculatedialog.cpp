#include "calculatedialog.h"
#include "ui_calculatedialog.h"
#include"CET6.h"

calculateDialog::calculateDialog(Stu *pt, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculateDialog)
{
    ui->setupUi(this);
    this->pt=pt;
}

calculateDialog::~calculateDialog()
{
    delete ui;
}

void calculateDialog::on_yespushButton_clicked()
{
    QString n1,n2,n3,n4;
    n1=ui->lineEdit->text();
    n2=ui->lineEdit_2->text();
    n3= ui->lineEdit_3->text();
    n4=ui->lineEdit_4->text();

  //  pt->score=CET6(n1.toInt(),n2.toInt(),n3.toInt(),n4.toInt());


}
