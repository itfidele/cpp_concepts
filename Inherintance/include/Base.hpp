#pragma once
#include <iostream>
using namespace std;

class Base{
    private:
        int value;
    public:
        Base();
        Base(int x);
        int a {0};
        void display(){ cout<<"a is "<<a<<"b is "<<b<<"c is "<<c<<endl;}
        ~Base();
    protected:
        int b{0};
    private:
        int c{0}; 
};