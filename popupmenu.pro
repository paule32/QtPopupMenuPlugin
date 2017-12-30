QT += designer widgets xml

SOURCES += \
    custom_popupmenuplugin.cc \
               popupmenuplugin.cc \
    popupmenutaskmenufactory.cc \
    popupmenutaskmenu.cc \
    popupmenudialog.cc \
    popupmenupropertypage.cc

HEADERS += \
    custom_popupmenuplugin.h \
           popupmenuplugin.h \
    popupmenutaskmenufactory.h \
    popupmenutaskmenu.h \
    popupmenudialog.h \
    popupmenupropertypage.h

FORMS += \
    popupmenupropertypage.ui

QTC_PLUGIN_NAME = PopupMenuPlugin


include(../../qtcreatorplugin.pri)
