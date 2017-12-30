#include <QObject>

#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerPropertySheetExtension>

#include <coreplugin/coreconstants.h>
#include <coreplugin/modemanager.h>

#include    "popupmenupropertypage.h"
#include "ui_popupmenupropertypage.h"

PopupMenuPropertyPage::PopupMenuPropertyPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PopupMenuPropertyPage)
{
    ui->setupUi(this);
}

PopupMenuPropertyPage::~PopupMenuPropertyPage()
{
    delete ui;
}

