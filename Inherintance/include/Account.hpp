#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account{
    double balance;
    string name;
    
    public:
        void deposit(double amount);
        void withdraw(double amount);
        Account();
        ~Account();
};