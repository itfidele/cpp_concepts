//
// Created by fidele on 29/01/2022.
//

#include "Player.hpp"


Player::Player():Player {"None",0,0}{
    std::cout<<"Constructor called"<<std::endl;
}

// Copy constructor
Player::Player(const Player &player):fullname {player.fullname},health {player.health},salary{player.salary}{
    std::cout<<"We made a copy of : <"<<player.fullname<<">"<<std::endl;
}

Player::Player(std::string name_v):Player{ name_v,0,0}{
    std::cout<<"One-Arg is passed"<<std::endl;
}

Player::Player(std::string name_v,double health_v,double salary_v): fullname {name_v}, health {health_v}, salary {salary_v}{
    std::cout<<"All-Args are passed"<<std::endl;
}

double Player::getHealth(){
    return health;
}
double Player::getSalary(){
    return salary;
}

std::string Player::getFullName(){
    return fullname;
}