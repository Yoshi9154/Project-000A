#include "userdisplay.h"
#include "ui_userdisplay.h"

UserDisplay::UserDisplay(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserDisplay),
    fullList(DataObject->returnList()),
    DataObject(new Database)
{
    ui->setupUi(this);
}

UserDisplay::~UserDisplay()
{
    UpdateList();
    DataObject->saveList(fullList);

    delete ui;
    delete fullList;
    delete DataObject;
}

void UserDisplay::DisplayListItems(){
    ui->listWidget->clear();
    for (vector<ListItem>::const_iterator itr = fullList->listBegin(), end = fullList->listEnd(); itr != end; itr++) {
        new QListWidgetItem(itr->getValue(), ui->listWidget);
    }
}

void UserDisplay::on_lineEdit_returnPressed()
{
    UpdateList();
    fullList->addItem(ui->lineEdit->text());
    DisplayListItems();
    ui->lineEdit->setText("");
}

void UserDisplay::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    UpdateList();
    fullList->deleteItem(ui->listWidget->row(item));
    delete item;
    DisplayListItems();
}

void UserDisplay::UpdateList(){
    //define new list
    List* newList = new List;

    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        newList->addItem(ui->listWidget->item(i)->text());
    }

    fullList = newList;
}
