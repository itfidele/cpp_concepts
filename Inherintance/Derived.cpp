#include "Derived.hpp"


Derived::Derived():double_value(0){
    cout<<"no-args Derived contructor called"<<endl;
}

Derived::Derived(int x):double_value(x){
    cout<<"Derived(int) arg contructor called"<<endl;
}

Derived::~Derived(){
     cout<<"Derived Destructor called"<<endl;
}
