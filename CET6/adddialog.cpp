﻿#include "adddialog.h"
#include "ui_adddialog.h"
#include"calcudialog.h"
#include<QMessageBox>

addDialog::addDialog(float* writing, Queue *pq,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    temp=new Stu;
    this->setWindowTitle(QStringLiteral("添加考生信息"));
    this->pq=pq;
    this->writing=writing;
//    ui->yesButton->setEnabled(false);

//    if(ui->idlineEdit->hasAcceptableInput())

}

addDialog::~addDialog()
{
    delete ui;
}



void addDialog::on_yesButton_clicked()
{
    Stu* pt=pq->find(ui->idlineEdit->text());
    if(pt==NULL)
    {
        pq->AddStu(ui->idlineEdit->text(),ui->namelineEdit->text(),
                     ui->scorelineEdit->text(),ui->ranklineEdit->text());
        pq->setChanged();
    }
    else
    {
        pq->ChangeInfo(ui->idlineEdit->text(),ui->namelineEdit->text(),
                       ui->scorelineEdit->text().toFloat(),ui->ranklineEdit->text().toInt());
    }

}

void addDialog::on_calculatepushButton_clicked()
{
    calcuDialog cal(writing,temp);
    cal.exec();
    ui->scorelineEdit->setText(QString::number(temp->score));

}
