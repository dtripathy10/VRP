/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *App)
    {
        if (App->objectName().isEmpty())
            App->setObjectName(QStringLiteral("App"));
        App->resize(400, 300);
        menuBar = new QMenuBar(App);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        App->setMenuBar(menuBar);
        mainToolBar = new QToolBar(App);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        App->addToolBar(mainToolBar);
        centralWidget = new QWidget(App);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        App->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(App);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        App->setStatusBar(statusBar);

        retranslateUi(App);

        QMetaObject::connectSlotsByName(App);
    } // setupUi

    void retranslateUi(QMainWindow *App)
    {
        App->setWindowTitle(QApplication::translate("App", "App", 0));
    } // retranslateUi

};

namespace Ui {
    class App: public Ui_App {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
