//
// Created by oudaw on 8/1/2022.
//

#ifndef BANK_SYSTEM_USER_H
#define BANK_SYSTEM_USER_H
#include <string>
using namespace std;


class User {
private:
    long Id;
    string firstName;
    string lastName;
    bool gender;
    string dateOfBirth;
    string nationalId;
    string password;
    string isActive;
    string createdAt;
    string updatedAt;

public:
    User(long Id, string firstName, string lastName,bool gender, string dateOfBirth, string nationalId, string password, string isActive, string createdAt, string updatedAt);

    long getId();
    string getFirstName();
    string getLastName();
    bool getGender();
    string getDateOfBirth();
    string getNationalId();
    string getPassword();
    string getIsActive();
    string getCreatedAt();
    string getUpdatedAt();
    ~User();
};


#endif //BANK_SYSTEM_USER_H
