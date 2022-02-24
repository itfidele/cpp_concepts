//
// Created by fidele on 23/02/2022.
//

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
// destructor
MyString::~MyString(){
    delete[] str;
}

// display method
void MyString::display()const{
    std::cout<<str<<":"<<get_length()<<std::endl;
}

// length getter
int MyString::get_length() const { return std::strlen(str); }

// string getter
const char *MyString::get_str() const{ return str;}

// copy assignment
MyString &MyString::operator=(const MyString &rhs){
    std::cout<<"Copy Assignments "<<std::endl;
    if(this == &rhs)
        return *this;
    
    delete[] this->str;
    str=new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str,rhs.str);

    return *this;
}