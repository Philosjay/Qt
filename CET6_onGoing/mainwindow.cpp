#define WRITING 160
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"listdialog.h"
#include"Stu.h"
#include"editwizard.h"
#include"searchpage.h"
#include"editpage.h"
#include"infodialog.h"
#include"adddialog.h"
#include"setwritingdialog.h"
#include<QFile>
#include<QTextStream>
#include<QFileDialog>
#include<QDialog>
#include<QMessageBox>
#include<QString>
#include<QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    this->setWindowTitle(QStringLiteral("CET6成绩管理系统"));
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    ui->idlineEdit->setPlaceholderText(QStringLiteral("输入姓名或学号"));

    Queue* pq=new Queue;
    this->pq=pq;
    writing=new float(WRITING);

    QMessageBox mes;
    mes.setText(QStringLiteral("**初始化**"));
    mes.setInformativeText(QStringLiteral("是否读取已有的成绩单?"));
    mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
    mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
    int ret=mes.exec();

    if(ret==QMessageBox::Yes)//读取现有文件
    {

        QString fileName=QFileDialog::getOpenFileName(this,QStringLiteral("选择待读取的成绩单"));
        if(fileName.length()!=0)
        {
            this->pq->setCurFile(fileName);
            this->pq->load();
            this->pq->sort();
            this->pq->setTitled();
        }
        else
        {
            pq->setCurFile("temp.txt");
        }

    }

}

MainWindow::~MainWindow()   //本程序每当数据更改时都自动保存到当前文件，但temp.txt中的内容在程序结束时需要导出，用isUntitled判断
{


/*    if(pq->tobeSave())
    {
        QMessageBox mes(this);
        mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
        mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
        mes.setText(QStringLiteral("正在关闭临时文件"));
        mes.setInformativeText(QStringLiteral("是否保存该临时成绩单？"));
        int ret=mes.exec();
        if(ret==QMessageBox::Yes)
        {
            QString fileName=QFileDialog::getSaveFileName(this,QStringLiteral("临时成绩单另存为"),".txt");
            pq->setCurFile(fileName);
            pq->save();
        }

    }
*/
    pq->save();

    delete ui;
}

void MainWindow::on_changeinfo_triggered()
{
    editWizard editw(pq);
    searchPage p1;
    editPage p2(writing,pq,pq->showCurFile());
    editw.addPage(&p1);
    editw.addPage(&p2);

    editw.exec();


}

void MainWindow::on_findpushButton_clicked()
{
    QString name=ui->idlineEdit->text();
    Stu* pt=pq->find(name);
    if(pt!=NULL)
    {
        infoDialog info(pt);
        info.exec();
    }
    else
    {
        QMessageBox mes(this);
        mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
        mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
        mes.setText(QStringLiteral("此考生不存在"));
        mes.setInformativeText(QStringLiteral("是否录入新的考生？"));
        int ret=mes.exec();
        if(ret==QMessageBox::Yes)
        {
            addDialog add(writing,pq);

            add.exec();

        }
        else
        {

        }
    }

}



void MainWindow::on_addButton_clicked()
{
    addDialog add(writing,pq);
    add.exec();
}

void MainWindow::on_deleteScore_triggered()
{
    QMessageBox mes(this);
    mes.setText(QStringLiteral("提示"));
    mes.setInformativeText(QStringLiteral("是否清零成绩？"));
    mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
    mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
    int ret=mes.exec();
    if(ret==QMessageBox::Yes)
    {
        pq->deleteScore();
    }
    pq->setChanged();

}

void MainWindow::on_deleteList_triggered()
{
    QMessageBox mes(this);
    mes.setText(QStringLiteral("提示"));
    mes.setInformativeText(QStringLiteral("是否清空成绩单？"));
    mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
    mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
    int ret=mes.exec();
    if(ret==QMessageBox::Yes)
    {
        QFile file(pq->showCurFile());
        file.open(QFile::WriteOnly);

    }
}

void MainWindow::on_listButton_triggered()
{
    listDialog list(pq);
    list.exec();
}

void MainWindow::on_outport_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,QStringLiteral("另存为"),"info.txt");
    if(fileName.length()!=0)
    {
        QFile file(fileName);
        file.open(QFile::WriteOnly|QFile::Text);
        QTextStream out(&file);

        QFile base(pq->showCurFile());
        base.open(QFile::ReadOnly|QFile::Text);
        QTextStream in(&base);

        out<<in.readAll();
    }

}

void MainWindow::on_emptyList_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,QStringLiteral("新建成绩单"));
    if(fileName.length()!=0)
    {
        pq->save();
        delete pq;//先删除原有Queue
        pq=new Queue;
        pq->setTitled();
        pq->setCurFile(fileName);
        pq->setChanged();
        pq->save();

    }

}

void MainWindow::on_hireddList_triggered()
{

    QString fileName=QFileDialog::getSaveFileName(this,QStringLiteral("新建成绩单"));
    if(fileName.length()!=0)
    {
        pq->save();
        pq->setTitled();
        pq->setCurFile(fileName);
        pq->setChanged();
        pq->save();
    }

}

void MainWindow::on_loadList_triggered()
{


    QString fileName=QFileDialog::getOpenFileName(this,QStringLiteral("选择待读取的成绩单"));
    if(fileName.length()!=0)    //读取窗口被关闭
    {
        pq->save();
        delete pq;
        pq=new Queue;
        pq->setCurFile(fileName);
        pq->setTitled();
        pq->load();
    }


}

void MainWindow::on_setWriting_triggered()
{
    setwritingDialog setw(writing);
    setw.exec();
}

void MainWindow::on_sort_triggered()
{
    pq->sort();
}

void MainWindow::on_action_S_triggered()
{
    pq->save();
}
