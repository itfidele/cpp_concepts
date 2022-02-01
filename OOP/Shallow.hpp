//
// Created by fidele on 01/02/2022.
//

#ifndef C__CONCEPTS_SHALLOW_HPP
#define C__CONCEPTS_SHALLOW_HPP

// Shallow copy example class
class Shallow {
private:
    int *data;
public:
    void setData(int d);
    int getData();
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};


#endif //C__CONCEPTS_SHALLOW_HPP
