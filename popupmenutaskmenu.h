#ifndef PLUGIN_TASKMENU_H
#define PLUGIN_TASKMENU_H

#include <QObject>
#include <QList>
#include <QAction>
#include <QPaintEvent>

#include <QDesignerTaskMenuExtension>

#include "popupmenuplugin.h"

class PopupMenuTaskMenu : public QObject, public QDesignerTaskMenuExtension
{
    Q_OBJECT
    Q_INTERFACES(QDesignerTaskMenuExtension)

public:
    PopupMenuTaskMenu(PopupMenuPlugin *_m, QObject * parent = 0);

    QAction *preferredEditAction() const;
    QList<QAction *> taskActions() const;

private slots:
    void onClicked();

private:
    QAction * editElementAction;
    PopupMenuPlugin * mnu;

    QObject * paintElement;
};

#endif
