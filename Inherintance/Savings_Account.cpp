

#include "Savings_Account.hpp"
#include <iostream>
using namespace std;

Savings_Account::Savings_Account():interest_rate{3.0}{

}

Savings_Account::~Savings_Account(){
    cout<<"Desctruction called on Savings Account"<<endl;
}

void Savings_Account::deposit(double amount){
    cout<<"Savings Account deposit called with amount of "<<amount<<endl;
}

void Savings_Account::withdraw(double amount){
    cout<<"Savings Account deposit called with amount of "<<amount<<endl;
}