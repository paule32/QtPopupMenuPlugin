#ifndef POPUPMENUPLUG_H
#define POPUPMENUPLUG_H

#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT PopupMenuPlugin : public QWidget
{
    Q_OBJECT

public:
    explicit PopupMenuPlugin(QWidget *parent = nullptr);

};

#endif

