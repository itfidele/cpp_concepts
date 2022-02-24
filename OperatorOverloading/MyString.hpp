//
// Created by fidele on 23/02/2022.
//

#ifndef C__CONCEPTS_MYSTRING_HPP
#define C__CONCEPTS_MYSTRING_HPP
#include <iostream>
#include <cstring>

class MyString {
private:
    char *str; //C-style string
public:
    MyString();
    MyString(const char* s);
    MyString(const MyString &source);
    MyString &operator=(const MyString &rhs);
    ~MyString();
    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif //C__CONCEPTS_MYSTRING_HPP
