#include "editwizard.h"
#include "ui_editwizard.h"
#include"editpage.h"
#include"searchpage.h"
#include"Stu.h"
#include<qabstractbutton.h>

editWizard::editWizard(Queue *pq, QWidget *parent) :
    QWizard(parent),
    ui(new Ui::editWizard)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    this->setWindowTitle(QStringLiteral("修改个人信息向导"));
    this->pq=pq;

}

editWizard::~editWizard()
{


    delete ui;
}

void editWizard::on_editWizard_accepted()
{
    if(pq->showCur()!=NULL)
    {
        QString a=pq->showCur()->id;
        pq->showCur()->name=field("name").toString();
        a=pq->showCur()->id=field("id").toString();
        pq->showCur()->score=field("score").toFloat();
        pq->showCur()->rank=field("rank").toInt();


        pq->setChanged();
    }


}
