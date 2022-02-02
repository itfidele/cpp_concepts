//
// Created by fidele on 02/02/2022.
//

#include "DeepCopy.hpp"


DeepCopy::DeepCopy(int d) {
    data=new int;
    *data = d;
}

DeepCopy::DeepCopy(const DeepCopy &source): DeepCopy{*source.data}{
    std::cout<<"Copy Constructor - Deep Copy"<<std::endl;
}

DeepCopy::~DeepCopy() {
    delete data;
    std::cout<<"Destructor Called - Freeing data"<<std::endl;
}

void DeepCopy::setData(int d) {
    *data=d;
}

int DeepCopy::getData() {
    return *data;
}