#include <QObject>
#include <QAction>
#include <QList>
#include <QMessageBox>

#include "popupmenutaskmenu.h"
#include "popupmenudialog.h"
#include "popupmenuplugin.h"

#include "popupmenupropertypage.h"
#include "popupmenupane.h"

PopupMenuTaskMenu::PopupMenuTaskMenu(
      PopupMenuPane *_m,
      QObject *parent)
    : QObject (parent)
{
//    paintElement = nullptr;

    mnu = _m;
    editElementAction = new QAction("Edit PlugIn-Properties...", this);

    connect(editElementAction, &QAction::triggered,
    this, &PopupMenuTaskMenu::onClicked);
}

void PopupMenuTaskMenu::onClicked()
{
    /*
    if (qobject_cast<QPushButton*>(rechner->ZahlButton1)->underMouse() == true) {
        paintElement = rechner->ZahlButton1;
        QMessageBox::information(0,"qqqqq","1212212");
    }*/

    PopupMenuPropertyPage p(this->mnu);
    p.exec();
}

QAction *
PopupMenuTaskMenu::preferredEditAction() const
{
    return editElementAction;
}

QList<QAction *>
PopupMenuTaskMenu::taskActions() const
{
    QList<QAction *> list;
    list.append(editElementAction);
    return list;
}
