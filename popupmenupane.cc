#include <QWidget>
#include <QMessageBox>

#include "popupmenupane.h"

PopupMenuPane::PopupMenuPane(QWidget *parent) : QWidget(parent)
{
    if (parent == nullptr) {
        QMessageBox::warning(0,"Warnung","Plugin konnte nicht erstellt werden");
        return;
    }

}
