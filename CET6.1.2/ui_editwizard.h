/********************************************************************************
** Form generated from reading UI file 'editwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIZARD_H
#define UI_EDITWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_editWizard
{
public:

    void setupUi(QWizard *editWizard)
    {
        if (editWizard->objectName().isEmpty())
            editWizard->setObjectName(QStringLiteral("editWizard"));
        editWizard->resize(489, 381);

        retranslateUi(editWizard);

        QMetaObject::connectSlotsByName(editWizard);
    } // setupUi

    void retranslateUi(QWizard *editWizard)
    {
        editWizard->setWindowTitle(QApplication::translate("editWizard", "Wizard", 0));
    } // retranslateUi

};

namespace Ui {
    class editWizard: public Ui_editWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIZARD_H
