#include "popupmenuplugin.h"
#include "popupmenutaskmenufactory.h"
#include "popupmenupane.h"

#include <QtPlugin>

PopupMenuPlugin::PopupMenuPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PopupMenuPlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized == true)
        return;

    QExtensionManager * manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(
        new PopupMenuTaskMenuFactory(manager),
        Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool PopupMenuPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PopupMenuPlugin::createWidget(QWidget *parent)
{
    PopupMenuPane * pane = new PopupMenuPane(parent);
    return   pane;
}

QString PopupMenuPlugin::name() const
{
    return QLatin1String("PopupMenu");
}

QString PopupMenuPlugin::group() const
{
    return QLatin1String("KallupTools");
}

QIcon PopupMenuPlugin::icon() const
{
    return  QIcon("");
}

QString PopupMenuPlugin::toolTip() const
{
    return QLatin1String("");
}

QString PopupMenuPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool PopupMenuPlugin::isContainer() const
{
    return false;
}

QString PopupMenuPlugin::domXml() const
{
    return QLatin1String("\
    <ui language=\"c++\">\
        <widget class=\"PopupMenuPlugin\" name=\"popupMenu\"/>\
        <customwidgets>\
            <customwidget>\
                <class>PopupMenu</class>\
                <propertyspecifications>\
                <stringpropertyspecification name=\"state\" notr=\"true\" type=\"singleline\"/>\
                </propertyspecifications>\
            </customwidget>\
        </customwidgets>}\
    </ui>");
}

QString PopupMenuPlugin::includeFile() const
{
    return QLatin1String("popupmenuplugin.h");
}

