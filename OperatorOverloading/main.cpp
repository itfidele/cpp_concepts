#include <iostream>
#include <cstring>
#include "String.hpp"
int main(){
    String empty;
    empty="Salam man Bimeze gute"; // operator overloading to my custom(<String>) class
    std::cout<<empty.getText()<<std::endl;
}  