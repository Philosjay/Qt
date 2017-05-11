/********************************************************************************
** Form generated from reading UI file 'searchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPAGE_H
#define UI_SEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_searchPage
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QFrame *line;
    QLabel *umbrellaLabel;

    void setupUi(QWizardPage *searchPage)
    {
        if (searchPage->objectName().isEmpty())
            searchPage->setObjectName(QStringLiteral("searchPage"));
        searchPage->resize(460, 280);
        lineEdit = new QLineEdit(searchPage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 130, 171, 31));
        label = new QLabel(searchPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 200, 271, 16));
        line = new QFrame(searchPage);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 210, 181, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        umbrellaLabel = new QLabel(searchPage);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(320, 0, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);
        line->raise();
        label->raise();
        lineEdit->raise();
        umbrellaLabel->raise();

        retranslateUi(searchPage);

        QMetaObject::connectSlotsByName(searchPage);
    } // setupUi

    void retranslateUi(QWizardPage *searchPage)
    {
        searchPage->setWindowTitle(QApplication::translate("searchPage", "WizardPage", 0));
        label->setText(QApplication::translate("searchPage", "\351\234\200\350\246\201\345\205\210\347\241\256\345\256\232\347\233\256\346\240\207\350\200\203\347\224\237\347\232\204\345\237\272\346\234\254\344\277\241\346\201\257", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class searchPage: public Ui_searchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
