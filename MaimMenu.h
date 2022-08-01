//
// Created by oudaw on 8/1/2022.
//

#ifndef BANK_SYSTEM_MAIMMENU_H
#define BANK_SYSTEM_MAIMMENU_H


class MaimMenu {
private:
    int input;
public:
    MaimMenu(int input);
    int getInput();
    void setInput(int input);
    void displayMenu(int input);
    ~MaimMenu();
};


#endif //BANK_SYSTEM_MAIMMENU_H
