#include <iostream>
#include "User.h"
#include <conio.h>
#include "MaimMenu.h"
using namespace std;

int main() {
    int input;
    cout<<"Enter a value to get started ...\n";
    cin>>input;


    MaimMenu menu(input);
    menu.displayMenu(input);

    User newUser(378, "Ouda", "Wycliffe", 1, "2002/12/28","12345678", "Admin@1234","active", "2022/08/01","2022/08/01");

    cout<<newUser.getFirstName();
    return 0;
}
