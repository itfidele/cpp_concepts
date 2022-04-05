#include "Account.hpp"
#include "Base.hpp"
#include "Derived.hpp"
#include "Savings_Account.hpp"
#include <iostream>


int main(){
    Account fidele_account {};
    fidele_account.deposit(3000.0);
    fidele_account.withdraw(500.0);

    cout<<endl;
    
    Account *destin_account {nullptr};
    destin_account= new Account();
    destin_account->deposit(4000.0);
    destin_account->withdraw(250.0);
    delete destin_account;

    cout<<endl;

    cout<<"============================= Savings account now ==========================="<<endl;

    Savings_Account fidele_saving {};
    fidele_saving.deposit(500.0);
    fidele_saving.withdraw(20.0);

    cout<<endl;

    Savings_Account *destin_saving {nullptr};
    destin_saving = new Savings_Account();
    destin_saving->deposit(5000.0);
    destin_saving->withdraw(400.0);
    delete destin_saving;

    cout<<"============== Base memeber access from Base object========================"<<endl;
    Base base;
    base.a=100; //OK
    //base.b=200;
    //base.c=200; //Compiler Error
    
    cout<<"============== Base memeber access from Derived object======================"<<endl;
    Derived d;
    d.a=100; // Ok
    //d.b=200; //Error
    //d.c=300; // Error

    Base bee;
    Base b{100};
    Derived de;
    Derived be{100};

    return 0;
}