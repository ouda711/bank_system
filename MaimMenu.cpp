//
// Created by oudaw on 8/1/2022.
//
#include<iostream>
#include "MaimMenu.h"

using namespace std;

MaimMenu::MaimMenu(int input): input(input) {

}

int MaimMenu::getInput() {
    return input;
}

void MaimMenu::setInput(int i) {
    this->input = i;
}

void MaimMenu::displayMenu(int input) {
    switch (input) {
        case 1:
            cout<<"Welcome to the registration portal"<<endl;
            cout<<"----------------------------------\n";
            break;
        default:
            cout<<"No value is selected";
    }
}

MaimMenu::~MaimMenu() {
    cout<<"Main menu quit";
}