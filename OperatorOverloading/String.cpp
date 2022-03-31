//
// Created by fidele on 23/02/2022.
//

#include "String.hpp"
#include <cstring>
// String::String(std::string txt){
//     text=txt;
// }

void String::operator=(std::string txt){
    //std::strcpy(txt,text);
    text=txt;
}

void String::operator+=(std::string txt){
    text.append(txt);
}
String::~String(){
    
}