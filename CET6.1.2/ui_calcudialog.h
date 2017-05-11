/********************************************************************************
** Form generated from reading UI file 'calcudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCUDIALOG_H
#define UI_CALCUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calcuDialog
{
public:
    QPushButton *nopushButton;
    QPushButton *yespushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *writingLineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *setpushButton;
    QLabel *label_6;
    QFrame *line;
    QLabel *umbrellaLabel;

    void setupUi(QDialog *calcuDialog)
    {
        if (calcuDialog->objectName().isEmpty())
            calcuDialog->setObjectName(QStringLiteral("calcuDialog"));
        calcuDialog->resize(400, 381);
        nopushButton = new QPushButton(calcuDialog);
        nopushButton->setObjectName(QStringLiteral("nopushButton"));
        nopushButton->setGeometry(QRect(240, 300, 75, 23));
        yespushButton = new QPushButton(calcuDialog);
        yespushButton->setObjectName(QStringLiteral("yespushButton"));
        yespushButton->setGeometry(QRect(70, 300, 75, 23));
        verticalLayoutWidget_2 = new QWidget(calcuDialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(140, 60, 81, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        writingLineEdit = new QLineEdit(verticalLayoutWidget_2);
        writingLineEdit->setObjectName(QStringLiteral("writingLineEdit"));

        verticalLayout_2->addWidget(writingLineEdit);

        verticalLayoutWidget = new QWidget(calcuDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 70, 81, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        setpushButton = new QPushButton(calcuDialog);
        setpushButton->setObjectName(QStringLiteral("setpushButton"));
        setpushButton->setGeometry(QRect(240, 240, 75, 23));
        label_6 = new QLabel(calcuDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 350, 211, 16));
        line = new QFrame(calcuDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 360, 191, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        umbrellaLabel = new QLabel(calcuDialog);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(270, 0, 141, 111));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);

        retranslateUi(calcuDialog);
        QObject::connect(nopushButton, SIGNAL(clicked()), calcuDialog, SLOT(reject()));
        QObject::connect(yespushButton, SIGNAL(clicked()), calcuDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(calcuDialog);
    } // setupUi

    void retranslateUi(QDialog *calcuDialog)
    {
        calcuDialog->setWindowTitle(QApplication::translate("calcuDialog", "Dialog", 0));
        nopushButton->setText(QApplication::translate("calcuDialog", "\345\217\226\346\266\210", 0));
        yespushButton->setText(QApplication::translate("calcuDialog", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("calcuDialog", "1~25 \357\274\232", 0));
        label_2->setText(QApplication::translate("calcuDialog", "26~35\357\274\232", 0));
        label_3->setText(QApplication::translate("calcuDialog", "35~45\357\274\232", 0));
        label_4->setText(QApplication::translate("calcuDialog", "46~55\357\274\232", 0));
        label_5->setText(QApplication::translate("calcuDialog", "\344\275\234\346\226\207\347\277\273\350\257\221\357\274\232", 0));
        setpushButton->setText(QApplication::translate("calcuDialog", "\344\277\256\346\224\271\351\273\230\350\256\244", 0));
        label_6->setText(QApplication::translate("calcuDialog", "\350\276\223\345\205\245\345\257\271\345\272\224\351\242\230\345\217\267\346\255\243\347\241\256\351\242\230\346\225\260\357\274\214\345\206\231\344\275\234\345\210\206\346\225\260", 0));
        umbrellaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class calcuDialog: public Ui_calcuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCUDIALOG_H
