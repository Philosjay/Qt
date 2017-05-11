/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *list;
    QAction *changeinfo;
    QAction *loadList;
    QAction *deleteList;
    QAction *deleteScore;
    QAction *listButton;
    QAction *emptyList;
    QAction *hireddList;
    QAction *outport;
    QAction *setWriting;
    QAction *sort;
    QWidget *centralWidget;
    QLineEdit *idlineEdit;
    QPushButton *findpushButton;
    QPushButton *addButton;
    QLabel *umbrellaLabel;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuTest;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(587, 336);
        MainWindow->setAnimated(true);
        list = new QAction(MainWindow);
        list->setObjectName(QStringLiteral("list"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        list->setIcon(icon);
        changeinfo = new QAction(MainWindow);
        changeinfo->setObjectName(QStringLiteral("changeinfo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeinfo->setIcon(icon1);
        loadList = new QAction(MainWindow);
        loadList->setObjectName(QStringLiteral("loadList"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadList->setIcon(icon2);
        deleteList = new QAction(MainWindow);
        deleteList->setObjectName(QStringLiteral("deleteList"));
        deleteScore = new QAction(MainWindow);
        deleteScore->setObjectName(QStringLiteral("deleteScore"));
        listButton = new QAction(MainWindow);
        listButton->setObjectName(QStringLiteral("listButton"));
        listButton->setIcon(icon);
        emptyList = new QAction(MainWindow);
        emptyList->setObjectName(QStringLiteral("emptyList"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        emptyList->setIcon(icon3);
        hireddList = new QAction(MainWindow);
        hireddList->setObjectName(QStringLiteral("hireddList"));
        outport = new QAction(MainWindow);
        outport->setObjectName(QStringLiteral("outport"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        outport->setIcon(icon4);
        setWriting = new QAction(MainWindow);
        setWriting->setObjectName(QStringLiteral("setWriting"));
        sort = new QAction(MainWindow);
        sort->setObjectName(QStringLiteral("sort"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        sort->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        idlineEdit = new QLineEdit(centralWidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(190, 180, 191, 31));
        findpushButton = new QPushButton(centralWidget);
        findpushButton->setObjectName(QStringLiteral("findpushButton"));
        findpushButton->setGeometry(QRect(100, 240, 75, 23));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(390, 240, 75, 23));
        umbrellaLabel = new QLabel(centralWidget);
        umbrellaLabel->setObjectName(QStringLiteral("umbrellaLabel"));
        umbrellaLabel->setGeometry(QRect(390, 10, 181, 151));
        umbrellaLabel->setMinimumSize(QSize(0, 151));
        umbrellaLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/umbrella.png")));
        umbrellaLabel->setScaledContents(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, -30, 371, 321));
        label->setMinimumSize(QSize(0, 321));
        label->setMaximumSize(QSize(16777215, 321));
        label->setFocusPolicy(Qt::NoFocus);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/title.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 60, 191, 151));
        label_2->setMinimumSize(QSize(0, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/sub.png")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        umbrellaLabel->raise();
        label_2->raise();
        label->raise();
        idlineEdit->raise();
        findpushButton->raise();
        addButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 587, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        menu_2 = new QMenu(menuTest);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addAction(changeinfo);
        menu->addAction(setWriting);
        menu->addSeparator();
        menu->addAction(deleteScore);
        menu->addAction(deleteList);
        menuTest->addAction(listButton);
        menuTest->addAction(loadList);
        menuTest->addSeparator();
        menuTest->addAction(menu_2->menuAction());
        menuTest->addAction(outport);
        menuTest->addSeparator();
        menuTest->addSeparator();
        menuTest->addSeparator();
        menu_2->addAction(emptyList);
        menu_2->addAction(hireddList);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        list->setText(QApplication::translate("MainWindow", "\346\210\220\347\273\251\345\215\225\346\237\245\350\257\242", 0));
        changeinfo->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", 0));
        loadList->setText(QApplication::translate("MainWindow", "\350\275\275\345\205\245\346\210\220\347\273\251\345\215\225", 0));
        deleteList->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\210\220\347\273\251\345\215\225", 0));
        deleteScore->setText(QApplication::translate("MainWindow", "\346\210\220\347\273\251\346\270\205\351\233\266", 0));
        listButton->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\346\210\220\347\273\251\345\215\225", 0));
        emptyList->setText(QApplication::translate("MainWindow", "\347\251\272\346\210\220\347\273\251\345\215\225", 0));
        hireddList->setText(QApplication::translate("MainWindow", "\345\237\272\344\272\216\345\275\223\345\211\215", 0));
        outport->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272", 0));
        setWriting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\275\234\346\226\207\351\273\230\350\256\244\345\276\227\345\210\206", 0));
        sort->setText(QApplication::translate("MainWindow", "\346\210\220\347\273\251\346\216\222\345\220\215", 0));
        findpushButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        addButton->setText(QApplication::translate("MainWindow", "\345\275\225\345\205\245", 0));
        umbrellaLabel->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\345\212\237\350\203\275", 0));
        menuTest->setTitle(QApplication::translate("MainWindow", "\346\210\220\347\273\251\345\215\225", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
