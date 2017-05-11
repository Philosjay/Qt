#include "infodialog.h"
#include "ui_infodialog.h"
#include"Stu.h"
#include<QTextStream>
#include<QFile>
#include<QFileDialog>
#include<QMessageBox>

infoDialog::infoDialog(Stu* pt,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    this->pt=pt;
    this->setWindowTitle(QStringLiteral("考生信息"));

    ui->lineEdit->setText(pt->id);
    ui->lineEdit_2->setText(pt->name);
    ui->lineEdit_3->setText(QString::number(pt->score));
    ui->lineEdit_4->setText(QString::number(pt->rank));

    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);


}

infoDialog::~infoDialog()
{
    delete ui;
}


