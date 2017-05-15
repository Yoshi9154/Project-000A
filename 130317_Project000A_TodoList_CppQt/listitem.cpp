#include "listitem.h"

ListItem::ListItem(QString UserValue)
   :value(UserValue)
{}

ListItem::~ListItem(){

}

QString ListItem::getValue() const {
    return value;
}

void ListItem::setValue(QString inValue) {
    value = inValue;
}

bool ListItem::operator==(const ListItem &rhs) const {
    return rhs.getValue() == this->getValue();
}

void ListItem::operator=(const ListItem &rhs) {
    this->setValue(rhs.getValue());
}
