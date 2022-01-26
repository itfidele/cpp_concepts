//
// Created by fidele on 26/01/2022.
//

#ifndef C__CONCEPTS_ACCOUNT_HPP
#define C__CONCEPTS_ACCOUNT_HPP
#include <string>

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
};


#endif //C__CONCEPTS_ACCOUNT_HPP
