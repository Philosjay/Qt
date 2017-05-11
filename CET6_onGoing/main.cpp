#include "mainwindow.h"
#include"Stu.h"
#include <QApplication>
#include<QFile>
#include<QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("1.ico"));
    MainWindow w;

    w.show();

    return a.exec();
}
