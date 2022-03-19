#include <iostream>
#include "String.hpp" // calling custom class
int main(){
    String empty;
    empty="Salam man Bimeze gute"; // operator overloading to my custom(<String>) class
    empty+="\n Birakaze"; // overloading += concatination
    std::cout<<empty.getText()<<std::endl;
}  