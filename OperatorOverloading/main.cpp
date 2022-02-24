#include <iostream>
#include <cstring>
#include "MyString.hpp"
int main(){
    MyString empty;
    MyString larry("larry");
    MyString stooge {larry};
    empty="Copy assignments test";

    empty.display();
    empty=larry;
    empty.display();
    larry.display();
    stooge.display();
}