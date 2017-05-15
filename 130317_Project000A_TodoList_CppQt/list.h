#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>

#include "listitem.h"

using namespace std;

class List
{
public:
    List();
    ~List();

    //List Manipulation
    void addItem(QString inName);
    void deleteItem(int inIndex);
    void clear();

    //List Communication
    vector<ListItem>::const_iterator listBegin() const;
    vector<ListItem>::const_iterator listEnd() const;

    void operator=(const List&rhs);

private:
    vector<ListItem> listVector;
};

#endif // LIST_H
