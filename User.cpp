//
// Created by oudaw on 8/1/2022.
//

#include "User.h"
#include<iostream>
using namespace std;

User::User(long Id, string firstName, string lastName, bool gender, string dateOfBirth,
           string nationalId, string password, string isActive, string createdAt,
           string updatedAt):Id(Id), firstName(firstName), lastName(lastName), gender(gender), dateOfBirth(dateOfBirth), nationalId(nationalId), password(password), isActive(isActive), createdAt(createdAt),updatedAt(updatedAt) {}

long User::getId() {
    return Id;
}

string User::getFirstName() {
    return firstName;
}

string User::getLastName() {
    return lastName;
}

bool User::getGender() {
    return gender;
}

string User::getDateOfBirth() {
    return dateOfBirth;
}

string User::getNationalId() {
    return nationalId;
}

string User::getPassword() {
    return password;
}

string User::getIsActive() {
    return isActive;
}

string User::getCreatedAt() {
    return createdAt;
}

string User::getUpdatedAt() {
    return updatedAt;
}

User::~User() {
    cout<<"User class exit";
}