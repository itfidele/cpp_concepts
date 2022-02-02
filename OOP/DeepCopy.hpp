//
// Created by fidele on 02/02/2022.
//

#ifndef C__CONCEPTS_DEEPCOPY_HPP
#define C__CONCEPTS_DEEPCOPY_HPP
#include <iostream>

class DeepCopy {
private:
    int *data;
public:
    DeepCopy(int d);
    void setData(int d);
    int getData();
    DeepCopy(const DeepCopy &source);
    ~DeepCopy();
};


#endif //C__CONCEPTS_DEEPCOPY_HPP
