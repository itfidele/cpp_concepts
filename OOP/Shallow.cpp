//
// Created by fidele on 01/02/2022.
//
#include <iostream>
#include "Shallow.hpp"


Shallow::Shallow(int d) {
    data = new int;
    *data=d;
}

Shallow::~Shallow() {
    delete data;
    std::cout<<"Destructor called "<<std::endl;
}

void Shallow::setData(int d) {
    *data=d;
}

int Shallow::getData() {
    return *data;
}
Shallow::Shallow(const Shallow &source): data(source.data) {
    std::cout<<"Copy constructor - Shallow copy"<<std::endl;
}