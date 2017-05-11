/********************************************************************************
** Form generated from reading UI file 'listdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDIALOG_H
#define UI_LISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_listDialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QPushButton *outport;
    QLabel *label_3;
    QLabel *umbrellaLabel;

    void setupUi(QDialog *listDialog)
    {
        if (listDialog->objectName().isEmpty())
            listDialog->setObjectName(QStringLiteral("listDialog"));
        listDialog->resize(552, 568);
        pushButton = new QPushButton(listDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 530, 75, 23));
        textEdit = new QTextEdit(listDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 130, 511, 381));
        label_2 = new QLabel(listDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 110, 54, 12));
        label = new QLabel(listDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 110, 54, 12));
        label_4 = new QLabel(listDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 110, 54, 12));
        outport = new QPushButton(listDialog);
        outport->setObjectName(QStringLiteral("outport"));
        outport->setGeometry(QRect(50, 530, 75, 23));
        label_3 = new QLabel(listDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 110, 54, 12));
        umbrellaLabel = new QLabel(listDialog);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(410, 10, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);

        retranslateUi(listDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), listDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(listDialog);
    } // setupUi

    void retranslateUi(QDialog *listDialog)
    {
        listDialog->setWindowTitle(QApplication::translate("listDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("listDialog", "\350\277\224\345\233\236", 0));
        label_2->setText(QApplication::translate("listDialog", "\345\247\223\345\220\215", 0));
        label->setText(QApplication::translate("listDialog", "\345\255\246\345\217\267", 0));
        label_4->setText(QApplication::translate("listDialog", "\346\216\222\345\220\215", 0));
        outport->setText(QApplication::translate("listDialog", "\345\257\274\345\207\272", 0));
        label_3->setText(QApplication::translate("listDialog", "\345\210\206\346\225\260", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class listDialog: public Ui_listDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDIALOG_H
