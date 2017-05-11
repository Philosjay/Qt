#include "listdialog.h"
#include "ui_listdialog.h"
#include<QTextStream>
#include<QFile>
#include<QFileDialog>

listDialog::listDialog(Queue* pq,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listDialog)
{   
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("成绩单"));
    this->pq=pq;
    pq->sort();


    pq->save();
    QFile file(pq->showCurFile());
    file.open(QFile::ReadOnly|QFile::Text);
    QTextStream in(&file);
    ui->textEdit->setPlainText(in.readAll());

    ui->textEdit->setReadOnly(true);


/*    Stu* temp=new Stu;
    Stu** pt=&temp;
    (*pt)=NULL;

    int len;
    while(pq->scanner(pt))
    {
        QString t=(*pt)->id;
        out.setFieldWidth(20);
        out.setString(&(*pt)->id);
        ui->textEdit->setPlainText(*out.string());

        t=*out.string();
        t=out.readAll();

        len=(*pt)->name.size();
        out.setString(&(*pt)->name);
        out.setFieldWidth(10-len);
        ui->textEdit->setPlainText(out.readAll());

        t=out.readAll();

        out.setFieldWidth(10);
        out.setString(&QString::number((*pt)->score));
        ui->textEdit->setPlainText(out.readAll());

        t=out.readAll();

        out.setString(&QString::number((*pt)->rank));
        ui->textEdit->setPlainText(out.readAll());

        t=out.readAll();
//        out.setFieldWidth(0);
//        ui->textEdit->setPlainText("\n");
    }

*/
}

listDialog::~listDialog()
{
    delete ui;
}

void listDialog::on_outport_clicked()
{
    QString fileName=QFileDialog::getSaveFileName(this,QStringLiteral("另存为"),"info.txt");
    QFile file(fileName);
    file.open(QFile::WriteOnly|QFile::Text);
    QTextStream out(&file);
    out<<ui->textEdit->toPlainText();
}
