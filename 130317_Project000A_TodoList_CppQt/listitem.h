#ifndef LISTITEM_H
#define LISTITEM_H

#include <QString>

class ListItem
{
public:
    ListItem(QString UserValue);
    ~ListItem();

    QString getValue() const;
    void setValue(QString inValue);

    bool operator==(const ListItem &rhs) const;
    void operator=(const ListItem &rhs);

private:
    QString value; //Contents of the ListItem object
};

#endif // LISTITEM_H
