/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDialog
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;
    QLineEdit *scorelineEdit;
    QLineEdit *ranklineEdit;
    QPushButton *calculatepushButton;
    QPushButton *yesButton;
    QPushButton *noButton;
    QLabel *umbrellaLabel;

    void setupUi(QDialog *addDialog)
    {
        if (addDialog->objectName().isEmpty())
            addDialog->setObjectName(QStringLiteral("addDialog"));
        addDialog->resize(360, 341);
        verticalLayoutWidget_2 = new QWidget(addDialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 90, 38, 131));
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

        verticalLayoutWidget = new QWidget(addDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 90, 111, 131));
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

        calculatepushButton = new QPushButton(addDialog);
        calculatepushButton->setObjectName(QStringLiteral("calculatepushButton"));
        calculatepushButton->setGeometry(QRect(220, 160, 75, 23));
        yesButton = new QPushButton(addDialog);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(60, 270, 75, 23));
        noButton = new QPushButton(addDialog);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(220, 270, 75, 23));
        umbrellaLabel = new QLabel(addDialog);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(220, 0, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);

        retranslateUi(addDialog);
        QObject::connect(noButton, SIGNAL(clicked()), addDialog, SLOT(reject()));
        QObject::connect(yesButton, SIGNAL(clicked()), addDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(addDialog);
    } // setupUi

    void retranslateUi(QDialog *addDialog)
    {
        addDialog->setWindowTitle(QApplication::translate("addDialog", "Dialog", 0));
        label->setText(QApplication::translate("addDialog", "\345\255\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("addDialog", "\345\247\223\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("addDialog", "\346\210\220\347\273\251\357\274\232", 0));
        label_4->setText(QApplication::translate("addDialog", "\345\220\215\346\254\241\357\274\232", 0));
        calculatepushButton->setText(QApplication::translate("addDialog", "\346\215\242\347\256\227", 0));
        yesButton->setText(QApplication::translate("addDialog", "\347\241\256\345\256\232", 0));
        noButton->setText(QApplication::translate("addDialog", "\345\217\226\346\266\210", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addDialog: public Ui_addDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
