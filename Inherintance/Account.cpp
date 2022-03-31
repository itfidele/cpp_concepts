#include "Account.hpp"
#include <iostream>
using namespace std;

Account::Account():balance{0.0},name{"An account"}{
    
}
void Account::deposit(double amount){
    cout<<"Account deposit called with amount of "<<amount<<endl;
}

void Account::withdraw(double amount){
    cout<<"Account withdraw called with amount of "<<amount<<endl;
}
Account::~Account(){
    cout<<"destruction Account called"<<endl;
}