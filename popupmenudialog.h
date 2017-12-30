#ifndef RECHNERDIALOG_H
#define RECHNERDIALOG_H

#include <QObject>
#include <QDialog>
#include <QWidget>
#include <QSize>

#include "popupmenuplugin.h"

class PopupMenuDialog : public QDialog
{
public:
    explicit PopupMenuDialog(PopupMenuPlugin *plugin = 0, QWidget *parent = 0);

    QSize sizeHint() const;

private:
    PopupMenuPlugin * mnu;
};

#endif
