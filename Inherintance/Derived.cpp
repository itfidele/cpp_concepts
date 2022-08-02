#include "Derived.hpp"


Derived::Derived():Base(),double_value(0){
    cout<<"no-args Derived contructor called"<<endl;
}

Derived::Derived(int x):Base(x),double_value(x*2){
    cout<<"Derived(int) arg contructor called"<<endl;
}

Derived::~Derived(){
     cout<<"Derived Destructor called"<<endl;
}
