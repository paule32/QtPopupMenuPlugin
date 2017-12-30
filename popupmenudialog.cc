#include <QObject>
#include <QDialog>
#include <QWidget>
#include <QSize>
#include <QTableWidget>

#include "popupmenudialog.h"
#include "popupmenuplugin.h"

PopupMenuDialog::PopupMenuDialog(PopupMenuPlugin *plugin, QWidget *parent)
    : QDialog(parent)
{
    mnu = plugin;

    QTableWidget *tableWidget;

    tableWidget = new QTableWidget(plugin);
    tableWidget->setObjectName(QStringLiteral("tableWidget"));
    tableWidget->setGeometry(QRect(40, 150,100,100));
}

QSize PopupMenuDialog::sizeHint() const
{
    return QSize(200,209);
}
