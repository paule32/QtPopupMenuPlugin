#ifndef RECHNERPROPERTYPAGE_H
#define RECHNERPROPERTYPAGE_H

#include <QWidget>
#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class PopupMenuPropertyPage;
}

class PopupMenuPropertyPage : public QDialog
{
    Q_OBJECT

public:
    explicit PopupMenuPropertyPage(QWidget *parent = 0);
            ~PopupMenuPropertyPage();

private slots:
//    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::PopupMenuPropertyPage *ui;
};

#endif // RECHNERPROPERTYPAGE_H
