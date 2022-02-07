#include <iostream>
#include "class_decralation.hpp"
#include "Account.hpp"
#include "Player.hpp"
#include "Shallow.hpp"
#include "DeepCopy.hpp"
#include "Move.hpp"
#include <vector>

using namespace std;
void display_shallow(Shallow obj){
    std::cout<<obj.getData()<<std::endl;
}



void display_player(Player p){
    cout<<"Full Name: "<<p.getFullName()<<endl;
    cout<<"Health: "<<p.getHealth()<<endl;
    cout<<"Salary: "<<p.getSalary()<<endl;

}

void display_deepcopy(DeepCopy d){
    cout<<d.getData()<<endl;
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
//    Shallow obj1 {13};
//    display_shallow(obj1);
//    Shallow obj2 {200};
//    display_shallow(obj2);

//    DeepCopy obj1 {13};
//    display_deepcopy(obj1);
//    DeepCopy obj2 {200};
//    display_deepcopy(obj2);
//    vector<Move> vec;
//    vec.push_back(Move{10});
//    vec.push_back(Move{20});
    cout<<Player::get_num_players()<<endl;
    Player player1;
    Player *player2 = new Player();
    delete player2;
    cout<<Player::get_num_players()<<endl;
    Player player3;

    cout<<Player::get_num_players()<<endl;

}
