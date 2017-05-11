/********************************************************************************
** Form generated from reading UI file 'setwritingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWRITINGDIALOG_H
#define UI_SETWRITINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setwritingDialog
{
public:
    QPushButton *yesPushButton;
    QPushButton *noPushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit1;
    QLabel *umbrellaLabel;

    void setupUi(QDialog *setwritingDialog)
    {
        if (setwritingDialog->objectName().isEmpty())
            setwritingDialog->setObjectName(QStringLiteral("setwritingDialog"));
        setwritingDialog->resize(400, 300);
        yesPushButton = new QPushButton(setwritingDialog);
        yesPushButton->setObjectName(QStringLiteral("yesPushButton"));
        yesPushButton->setGeometry(QRect(60, 230, 75, 23));
        noPushButton = new QPushButton(setwritingDialog);
        noPushButton->setObjectName(QStringLiteral("noPushButton"));
        noPushButton->setGeometry(QRect(260, 230, 75, 23));
        formLayoutWidget = new QWidget(setwritingDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 130, 151, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        lineEdit1 = new QLineEdit(formLayoutWidget);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit1);

        umbrellaLabel = new QLabel(setwritingDialog);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(250, 10, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);

        retranslateUi(setwritingDialog);
        QObject::connect(noPushButton, SIGNAL(clicked()), setwritingDialog, SLOT(reject()));
        QObject::connect(yesPushButton, SIGNAL(clicked()), setwritingDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(setwritingDialog);
    } // setupUi

    void retranslateUi(QDialog *setwritingDialog)
    {
        setwritingDialog->setWindowTitle(QApplication::translate("setwritingDialog", "Dialog", 0));
        yesPushButton->setText(QApplication::translate("setwritingDialog", "\347\241\256\345\256\232", 0));
        noPushButton->setText(QApplication::translate("setwritingDialog", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("setwritingDialog", "\344\275\234\346\226\207\357\274\232", 0));
        label_2->setText(QApplication::translate("setwritingDialog", "\347\277\273\350\257\221\357\274\232", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setwritingDialog: public Ui_setwritingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWRITINGDIALOG_H
