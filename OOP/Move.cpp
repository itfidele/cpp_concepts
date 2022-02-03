//
// Created by fidele on 03/02/2022.
//

#include "Move.hpp"

Move::Move(int d) {
    data=new int;
    *data=d;
    std::cout<<"Constructor for: "<<d<<std::endl;
}

Move::Move(const Move &source):Move {*source.data}{
    std::cout<<"Constructor - Deep copying"<<std::endl;
}


Move::~Move(){
    if(data!= nullptr){
        std::cout<<"Destruction freeing data: "<<*data<<std::endl;
    }
    else{
        std::cout<<"Destruction freeing data for nullptr: "<<std::endl;
    }
    delete data;

}

Move::Move(Move &&source) noexcept:data {source.data} {
    source.data= nullptr;
    std::cout<<"Move Constructor -  moving data: "<<*data<<std::endl;
}