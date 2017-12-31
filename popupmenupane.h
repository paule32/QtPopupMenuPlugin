#ifndef RECHNER_H
#define RECHNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtCore/QPoint>
#include <QList>
#include <QString>

#include <QPalette>

#include <QtDesigner/QtDesigner>
#include <QtWidgets/QWidget>


class QDESIGNER_WIDGET_EXPORT PopupMenuPane: public QWidget
{
    Q_OBJECT

public:
    PopupMenuPane(QWidget *parent = 0);
};

#endif
