#ifndef EDITWIZARD_H
#define EDITWIZARD_H

#include <QWizard>
#include"Stu.h"

namespace Ui {
class editWizard;
}

class editWizard : public QWizard
{
    Q_OBJECT

public:
    explicit editWizard(Queue* pq,QWidget *parent = 0);
    ~editWizard();
private slots:
    void on_editWizard_accepted();

private:
    Ui::editWizard *ui;
    Queue* pq;
};

#endif // EDITWIZARD_H
