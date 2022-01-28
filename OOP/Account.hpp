//
// Created by fidele on 26/01/2022.
//

#ifndef C__CONCEPTS_ACCOUNT_HPP
#define C__CONCEPTS_ACCOUNT_HPP
#include <string>
#include <iostream>
class Account {
private:
    std::string username;
    std::string fullname;
    double amount;
public:
    void setName(std::string user_name);
    void fullName(std::string full_name);
    void deposit(double val){ amount+=val; }
    void withdraw(double val){ amount-=val; }
    std::string getName();
    void setFullName(std::string fullname);
    std::string getFullName();
    double getBalance();
    Account();
    //Overloaded constructor
    Account(std::string user_name);
    ~Account();
};


#endif //C__CONCEPTS_ACCOUNT_HPP
