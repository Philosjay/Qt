#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include"Stu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_changeinfo_triggered();

    void on_findpushButton_clicked();


    void on_addButton_clicked();

    void on_deleteScore_triggered();

    void on_deleteList_triggered();

    void on_listButton_triggered();

    void on_outport_triggered();

    void on_emptyList_triggered();

    void on_hireddList_triggered();

    void on_loadList_triggered();

    void on_setWriting_triggered();

    void on_sort_triggered();

private:
    Ui::MainWindow *ui;
    Queue* pq;
    float* writing;
};

#endif // MAINWINDOW_H
