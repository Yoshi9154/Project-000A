#include "list.h"

List::List()
{}

List::~List() {
}

void List::addItem(QString inName){
    //Creates a temporary ListItem and then adds it to the listVector.
    ListItem tempItem(inName);
    listVector.push_back(tempItem);
}

void List::deleteItem(int inIndex){
    listVector.erase(listBegin()+inIndex);
}

void List::clear(){
    listVector.clear();
}

void List::operator=(const List&rhs) {
    //Copies every item from the rhs listVector to the other listVector
    for(vector<ListItem>::const_iterator itr = rhs.listBegin(), end = rhs.listEnd(); itr != end; itr++){
        listVector.push_back(*itr);
    }
}

vector<ListItem>::const_iterator List::listBegin() const{
    return listVector.begin();
}

vector<ListItem>::const_iterator List::listEnd() const{
    return listVector.end();
}
