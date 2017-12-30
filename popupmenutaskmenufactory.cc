#include <QDesignerTaskMenuExtension>

#include "popupmenutaskmenu.h"
#include "popupmenutaskmenufactory.h"
#include "popupmenuplugin.h"

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

    if (PopupMenuPlugin * mnu = qobject_cast<PopupMenuPlugin*>(object))
    return new PopupMenuTaskMenu(mnu, parent);

    return 0;
}
