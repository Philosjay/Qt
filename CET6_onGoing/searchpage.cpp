#include "searchpage.h"
#include "ui_searchpage.h"
#include"Stu.h"

searchPage::searchPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::searchPage)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

    this->setWindowTitle(QStringLiteral("查找考生信息"));
    ui->lineEdit->setPlaceholderText(QStringLiteral("输入姓名或学号"));

    this->registerField("searchLine*",ui->lineEdit);
}

searchPage::~searchPage()
{
    delete ui;
}
