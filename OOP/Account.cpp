//
// Created by fidele on 26/01/2022.
//

#include "Account.hpp"

void Account::setName(std::string user_name) {
    username = user_name;
}

void Account::fullName(std::string fullname) {
    fullname = fullname;
}

std::string Account::getName(){
    return username;
}

std::string Account::getFullName() {
    return fullname;
}

void Account::setFullName(std::string full_name) {
    fullname = full_name;
}