QT += designer widgets xml

SOURCES += \
    popupmenuplugin.cc \
    popupmenutaskmenufactory.cc \
    popupmenutaskmenu.cc \
    popupmenupropertypage.cc \
    popupmenupane.cc

HEADERS += \
    popupmenuplugin.h \
    popupmenutaskmenufactory.h \
    popupmenutaskmenu.h \
    popupmenupropertypage.h \
    popupmenupane.h

FORMS += \
    popupmenupropertypage.ui

QTC_PLUGIN_NAME = PopupMenuPlugin


include(../../qtcreatorplugin.pri)
