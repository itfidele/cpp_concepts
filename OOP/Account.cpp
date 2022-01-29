//
// Created by fidele on 26/01/2022.
//

#include "Account.hpp"

//better way to initialize constructor
Account::Account(): username {"<Empty>"},fullname {"None"},amount{0.0}{

}
Account::~Account() {
    std::cout<<"Destructor called for <"<<username<<">"<<std::endl;
}
//overloading constructoe
Account::Account(std::string user_name) {
    username = user_name;
    //std::cout<<"One argument received"<<std::endl;
}
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

double Account::getBalance() {
    return amount;
}