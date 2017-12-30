#include <QDesignerFormEditorInterface>
#include <QDesignerTaskMenuExtension>

#include "custom_popupmenuplugin.h"
#include "popupmenutaskmenufactory.h"
#include "popupmenuplugin.h"

#include <QtPlugin>

QtPopupMenuPlugin::QtPopupMenuPlugin(QObject * parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QtPopupMenuPlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager * manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(
        new PopupMenuTaskMenuFactory(manager),
        Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

QWidget *QtPopupMenuPlugin::createWidget(QWidget *parent)
{
    PopupMenuPlugin * dframe = new PopupMenuPlugin(parent);
    return dframe;
}

bool QtPopupMenuPlugin::isInitialized() const
{
    return m_initialized;
}

QString QtPopupMenuPlugin::name() const
{
    return QStringLiteral("PopupMenuPlugin");
}

QString QtPopupMenuPlugin::group() const
{
    return QStringLiteral("Display Widgets [kallup] ");
}

QIcon QtPopupMenuPlugin::icon() const
{
    return QIcon();
}

QString QtPopupMenuPlugin::toolTip() const
{
    return QString();
}

QString QtPopupMenuPlugin::whatsThis() const
{
    return QString();
}

bool QtPopupMenuPlugin::isContainer() const
{
    return false;
}

QString QtPopupMenuPlugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"PopupMenuPlugin\" name=\"popupMenu\">\n"
           "  <property name=\"geometry\">\n"
           "   <rect>\n"
           "    <x>0</x>\n"
           "    <y>0</y>\n"
           "    <width>100</width>\n"
           "    <height>100</height>\n"
           "   </rect>\n"
           "  </property>\n"
           "  <property name=\"toolTip\" >\n"
           "   <string>The PopupMenu</string>\n"
           "  </property>\n"
           "  <property name=\"whatsThis\" >\n"
           "   <string>This plugin extentds Qt Creator for cliki claky menus</string>\n"
           "  </property>\n"
           " </widget>\n"
           "</ui>\n";
}

QString QtPopupMenuPlugin::includeFile() const
{
    return QStringLiteral("popupmenuplugin.h");
}


