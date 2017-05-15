#ifndef DATABASE_H
#define DATABASE_H

#include <QDir>
#include <QFile>
#include <QTextStream>

#include "list.h"

class Database
{
public:
    Database();
    ~Database();

    //Functions responsible for the storing and retrieving of data
    void saveList(List *inList);
    List* returnList() const;

private:
    QDir *path;
};

#endif // DATABASE_H
