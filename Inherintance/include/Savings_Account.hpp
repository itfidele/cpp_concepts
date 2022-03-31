#pragma once

#include "Account.hpp"

class Savings_Account: public Account{
    public:
        double interest_rate;
        
        Savings_Account();
        ~Savings_Account();
        void deposit(double amount);
        void withdraw(double amount);
};