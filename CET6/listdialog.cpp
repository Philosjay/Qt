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
    pq->sort();
    pq->save();
    QFile file(pq->showCurFile());
    file.open(QFile::ReadOnly|QFile::Text);
    QTextStream in(&file);
    ui->textEdit->setPlainText(in.readAll());

    ui->textEdit->setReadOnly(true);

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
