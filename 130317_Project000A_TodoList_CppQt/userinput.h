#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include "listitem.h"
#include "list"
#include "userdisplay.h"

using namespace std;

class UserInput
{
public:
    UserInput();
    void UserAddItem(string inValue, UserDisplay inUI);
    void UserMoveItem(ListItem inItem, UserDisplay inUI);
    void UserPopWindow();
};

#endif // USERINPUT_H
