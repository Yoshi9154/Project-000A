#include "database.h"

Database::Database()
    :path(new QDir("path"))
{}

Database::~Database(){
    delete path;
}

void Database::saveList(List *inList){
//Saves the list in the path
//From the given List, it enters every item from that list into the file.
    QFile file(path->currentPath()+"\\data.txt");
    QTextStream stream(&file);

    // Opens the file data.txt, tests for errors
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)){
        cout << (file.errorString()).toStdString() << endl;
    }

    for (vector<ListItem>::const_iterator itr = inList->listBegin(), end = inList->listEnd(); itr != end; itr++) {
        stream << itr->getValue() << endl;
    }
}

List* Database::returnList() const{
//Creates a temporary list
    List *tempList = new List;
    QFile file(path->currentPath()+"\\data.txt");
    QTextStream stream(&file);

    // Opens the file data.txt, tests for errors
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)){
        cout << (file.errorString()).toStdString() << endl;
    }

    while (!stream.atEnd()) {
        //Adds each item on each newline as a ListItem to the tempList
        QString item = stream.readLine();
        tempList->addItem(item);
    }

    return tempList;
}
