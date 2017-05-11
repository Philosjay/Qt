#include "editpage.h"
#include "ui_editpage.h"
#include"Stu.h"
#include"calcudialog.h"
#include<QMessageBox>
#include<qabstractbutton.h>
#include<QFile>
#include<QTextStream>

editPage::editPage(float* writing, Queue *pq, QString fileName, QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::editPage)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    this->pq=pq;
    this->curFile=fileName;
    this->writing=writing;
    this->setWindowTitle(QStringLiteral("编辑个人信息"));
    pt=NULL;

    registerField("id",ui->idlineEdit);
    registerField("name",ui->namelineEdit);
    registerField("score*",ui->scorelineEdit);
    registerField("rank*",ui->ranklineEdit);
}

editPage::~editPage()       //页面析构时修改信息
{
    delete ui;
}

void editPage::initializePage()
{
    QString name=field("searchLine").toString();
    Stu* pt=pq->find(name);
    if(pt!=NULL)
    {
        ui->idlineEdit->setEnabled(true);
        ui->namelineEdit->setEnabled(true);
        ui->scorelineEdit->setEnabled(true);
        ui->ranklineEdit->setEnabled(true);
        ui->calculatepushButton->setEnabled(true);
        ui->deleteButton->setEnabled(true);

        ui->namelineEdit->setText(pt->name);
        ui->idlineEdit->setText(pt->id);
        ui->scorelineEdit->setText(QString::number(pt->score));
        ui->ranklineEdit->setText(QString::number(pt->rank));



        this->pt=pt;    //记录待修改条目
    }
    else
    {
        QMessageBox mes(this);
        mes.setText(QStringLiteral("考生不存在."));
        mes.setInformativeText(QStringLiteral("是否录入新的考生?"));
        mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
        mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
        int ret=mes.exec();

        if(ret==QMessageBox::Yes)//close
        {
            QWizard* temp=wizard();
            temp->reject();
        }
        else if(ret==QMessageBox::No)//back
        {
//            QWizard* temp=wizard();

//            temp->back();

            ui->idlineEdit->setText(QStringLiteral("不存在"));
            ui->namelineEdit->setText(QStringLiteral("不存在"));

        }

        ui->idlineEdit->setEnabled(false);
        ui->namelineEdit->setEnabled(false);
        ui->scorelineEdit->setEnabled(false);
        ui->ranklineEdit->setEnabled(false);
        ui->deleteButton->setEnabled(false);
        ui->calculatepushButton->setEnabled(false);
    }

}

void editPage::on_calculatepushButton_clicked()
{
    calcuDialog cal(writing,pt);
    cal.exec();
    ui->scorelineEdit->setText(QString::number(pt->score));



}



void editPage::on_deleteButton_clicked()
{
    QMessageBox mes(this);
    mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
    mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
    mes.setText(QStringLiteral("提示"));
    mes.setInformativeText(QStringLiteral("是否确定删除该考生？"));
    int ret=mes.exec();
    if(ret==QMessageBox::Yes)
    {
        pq->DelStu();
        pt=NULL;
        ui->idlineEdit->setText(QStringLiteral("已删除"));
        ui->namelineEdit->setText(QStringLiteral("已删除"));
        ui->scorelineEdit->setText(QStringLiteral("已删除"));
        ui->ranklineEdit->setText(QStringLiteral("已删除"));
        ui->namelineEdit->setEnabled(false);
        ui->idlineEdit->setEnabled(false);
        ui->scorelineEdit->setEnabled(false);
        ui->ranklineEdit->setEnabled(false);
        ui->calculatepushButton->setEnabled(false);
        ui->deleteButton->setEnabled(false);

        pq->setChanged();
        show();
    }


}









