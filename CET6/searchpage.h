#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H

#include <QWizardPage>
#include"Stu.h"

namespace Ui {
class searchPage;
}

class searchPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit searchPage(QWidget *parent = 0);
    ~searchPage();


private:
    Ui::searchPage *ui;
};

#endif // SEARCHPAGE_H
