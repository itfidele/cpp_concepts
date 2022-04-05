#include "Base.hpp"

Base::Base():value{0}{
    cout<<"Base no-args contructor called"<<endl;
}

Base::Base(int x):value{x}{ // initialize value
    cout<<"Base(int) constructor called"<<endl;
}

Base::~Base(){
    cout<<"Base Destructor called"<<endl;
}