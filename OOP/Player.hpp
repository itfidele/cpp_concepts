//
// Created by fidele on 29/01/2022.
//

#ifndef C__CONCEPTS_PLAYER_HPP
#define C__CONCEPTS_PLAYER_HPP

// Delegating constructors Example
#include <iostream>
#include <string>

class Player {
private:
    std::string fullname;
    double health;
    double salary;
public:
    Player();
    Player(std::string name_v);
    Player(std::string name_v,double health_v,double salary_v);
    // Copy constructor
    Player(const Player &player);
    std::string getFullName();
    double getHealth();
    double getSalary();
    ~Player(){ std::cout<<"Destructor called"<<std::endl; };
};


#endif //C__CONCEPTS_PLAYER_HPP
