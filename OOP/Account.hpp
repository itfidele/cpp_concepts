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
public:
    void setName(std::string user_name);
    void fullName(std::string full_name);
    std::string getName();
    void setFullName(std::string fullname);
    std::string getFullName();
    //Overloaded constructors
    Account();
    Account(std::string user_name);
    ~Account();
};


#endif //C__CONCEPTS_ACCOUNT_HPP
