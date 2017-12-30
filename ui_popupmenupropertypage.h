/********************************************************************************
** Form generated from reading UI file 'popupmenupropertypage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPMENUPROPERTYPAGE_H
#define UI_POPUPMENUPROPERTYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PopupMenuPropertyPage
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QWidget *PopupMenuPropertyPage)
    {
        if (PopupMenuPropertyPage->objectName().isEmpty())
            PopupMenuPropertyPage->setObjectName(QLatin1String("PopupMenuPropertyPage"));
        PopupMenuPropertyPage->resize(240, 280);


        QMetaObject::connectSlotsByName(PopupMenuPropertyPage);
    }
};

namespace Ui {
    class PopupMenuPropertyPage: public Ui_PopupMenuPropertyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPMENUPROPERTYPAGE_H
