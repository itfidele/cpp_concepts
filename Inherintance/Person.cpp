
#include "Person.hpp"

Person::Person(string name){
    this->name = name;
}

void Person::greetings(){
    cout<<"Hello "<<name<<endl;
}