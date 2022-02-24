//
// Created by fidele on 23/02/2022.
//
#include <cstring>
#include "MyString.hpp"

MyString::MyString():str(nullptr) {
    str=new char [1];
    *str='\0';
}

//override constructor
MyString::MyString(const char *s){
    if(str == nullptr){
        str = new char[1];
        *str='\0';
    }
    else{
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

// copy constructor
MyString::MyString(const MyString &source):str(nullptr){
    str=new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

MyString::~MyString(){
    delete[] str;
}

void MyString::display()const{
    std::cout<<str<<":"<<get_length()<<std::endl;
}

int MyString::get_length() const { return std::strlen(str); }

const char *MyString::get_str() const{ return str;}