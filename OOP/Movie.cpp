//
// Created by fidele on 14/02/2022.
//

#include "Movie.hpp"

std::string Movie::getName(){
    return this->name;
}


void Movie::setWatched(int value){
    this->watched=value;
}

void Movie::increamentWatched() {
    this->watched++;
}

int Movie::getWatched() {
    return this->watched;
}