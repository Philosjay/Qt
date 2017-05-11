#ifndef EDITPAGE_H
#define EDITPAGE_H

#include"Stu.h"
#include <QWizardPage>

namespace Ui {
class editPage;
}

class editPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit editPage(float *writing, Queue* pq, QString fileName, QWidget *parent = 0);
    ~editPage();

    void initializePage();

private slots:
    void on_calculatepushButton_clicked();

    void on_deleteButton_clicked();
    
private:
    Ui::editPage *ui;
    QString curFile;
    Queue* pq;
    Stu* pt;       //当前页面学生信息
    float* writing;
};

#endif // EDITPAGE_H
