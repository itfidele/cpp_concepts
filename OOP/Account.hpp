//
// Created by fidele on 26/01/2022.
//
#include <iostream>
#ifndef C__CONCEPTS_ACCOUNT_HPP
#define C__CONCEPTS_ACCOUNT_HPP


class Account {
private:
    std::string name;
    std::string fullname;
public:
    void setName(std::string name);
    void fullName(std::string fullname);
    void print();
};


#endif //C__CONCEPTS_ACCOUNT_HPP
