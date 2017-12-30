#ifndef POPUPMENUTASKMENUFACTORY_H
#define POPUPMENUTASKMENUFACTORY_H

#include <QObject>
#include <QString>

#include <QExtensionManager>
#include <QExtensionFactory>

class PopupMenuTaskMenuFactory : public QExtensionFactory
{
    Q_OBJECT
public:
    PopupMenuTaskMenuFactory(QExtensionManager *parent = 0);

protected:
    QObject *createExtension(QObject *object, const QString &iid, QObject *parent) const;
};

#endif
