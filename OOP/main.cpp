#include <iostream>
#include "class_decralation.hpp"
#include "Account.hpp"
#include "Player.hpp"
#include "Shallow.hpp"

void display_shallow(Shallow obj){
    std::cout<<obj.getData()<<std::endl;
}

using namespace std;

void display_player(Player p){
    cout<<"Full Name: "<<p.getFullName()<<endl;
    cout<<"Health: "<<p.getHealth()<<endl;
    cout<<"Salary: "<<p.getSalary()<<endl;

}

int main(int argc, char const *argv[])
{
    /*
     class declaration test
    User *user {nullptr};
    user= new User(); // create a new memory using pointer
    delete user; // delete data from the hip after uring them

    */
//    Account bill {"Fidele"}; // this call the constructor
//    bill.setFullName("Fidele K.Cyisa");
//    cout<<"Name: "<<bill.getName()<<endl;
//    cout<<"Full Name: "<<bill.getFullName()<<endl;
//    return 0;

//    Player flank;
//    display_player(flank); // Copying of constructor
//    Player fidele {"Fidele"};
//    Player eric {"Eric",30,90};
    Shallow obj1 {13};
    display_shallow(obj1);
    Shallow obj2 {200};
    display_shallow(obj2);

}
