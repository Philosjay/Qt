/********************************************************************************
** Form generated from reading UI file 'editpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPAGE_H
#define UI_EDITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_editPage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *scorelineEdit;
    QLineEdit *ranklineEdit;
    QPushButton *calculatepushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *deleteButton;
    QLabel *umbrellaLabel;

    void setupUi(QWizardPage *editPage)
    {
        if (editPage->objectName().isEmpty())
            editPage->setObjectName(QStringLiteral("editPage"));
        editPage->resize(440, 300);
        verticalLayoutWidget = new QWidget(editPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 80, 111, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        idlineEdit = new QLineEdit(verticalLayoutWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));

        verticalLayout->addWidget(idlineEdit);

        namelineEdit = new QLineEdit(verticalLayoutWidget);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        verticalLayout->addWidget(namelineEdit);

        scorelineEdit = new QLineEdit(verticalLayoutWidget);
        scorelineEdit->setObjectName(QStringLiteral("scorelineEdit"));

        verticalLayout->addWidget(scorelineEdit);

        ranklineEdit = new QLineEdit(verticalLayoutWidget);
        ranklineEdit->setObjectName(QStringLiteral("ranklineEdit"));

        verticalLayout->addWidget(ranklineEdit);

        calculatepushButton = new QPushButton(editPage);
        calculatepushButton->setObjectName(QStringLiteral("calculatepushButton"));
        calculatepushButton->setGeometry(QRect(290, 150, 75, 23));
        verticalLayoutWidget_2 = new QWidget(editPage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(110, 80, 38, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAutoFillBackground(false);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        deleteButton = new QPushButton(editPage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(20, 220, 75, 23));
        umbrellaLabel = new QLabel(editPage);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(320, 0, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);

        retranslateUi(editPage);
        QObject::connect(deleteButton, SIGNAL(clicked()), editPage, SLOT(close()));

        QMetaObject::connectSlotsByName(editPage);
    } // setupUi

    void retranslateUi(QWizardPage *editPage)
    {
        editPage->setWindowTitle(QApplication::translate("editPage", "WizardPage", 0));
        calculatepushButton->setText(QApplication::translate("editPage", "\346\215\242\347\256\227", 0));
        label->setText(QApplication::translate("editPage", "\345\255\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("editPage", "\345\247\223\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("editPage", "\346\210\220\347\273\251\357\274\232", 0));
        label_4->setText(QApplication::translate("editPage", "\345\220\215\346\254\241\357\274\232", 0));
        deleteButton->setText(QApplication::translate("editPage", "\345\210\240\351\231\244", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editPage: public Ui_editPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPAGE_H
