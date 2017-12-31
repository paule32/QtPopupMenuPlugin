#include <QDesignerTaskMenuExtension>

#include "popupmenutaskmenu.h"
#include "popupmenutaskmenufactory.h"
#include "popupmenuplugin.h"
#include "popupmenupropertypage.h"

PopupMenuTaskMenuFactory::PopupMenuTaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *
PopupMenuTaskMenuFactory::createExtension(
    QObject *object,
    const QString &iid,
    QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
    return 0;

    if (PopupMenuPane * mnu = qobject_cast<PopupMenuPane*>(object))
    return new PopupMenuTaskMenu(mnu, parent);

    return 0;
}
