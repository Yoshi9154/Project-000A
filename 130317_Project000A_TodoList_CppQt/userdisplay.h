#ifndef USERDISPLAY_H
#define USERDISPLAY_H

#include "list.h"
#include "userdisplay.h"
#include "Database.h"

#include <QMainWindow>
#include <QListWidget>

namespace Ui {
class UserDisplay;
}

class UserDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserDisplay(QWidget *parent = 0);
    ~UserDisplay();

    void DisplayListItems();

    vector<ListItem> getMainList();
    UserDisplay getMainUI();
    void UpdateList();

private slots:
    void on_lineEdit_returnPressed();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::UserDisplay *ui;
    List *fullList;
    Database *DataObject;
};
#endif // USERDISPLAY_H
