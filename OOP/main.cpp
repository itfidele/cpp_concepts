#include <iostream>
#include "class_decralation.hpp"
#include "Account.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    /*
     class declaration test
    User *user {nullptr};
    user= new User(); // create a new memory using pointer
    delete user; // delete data from the hip after uring them

    */
    Account bill;
    bill.setName("Fidele");
    bill.print();
    return 0;
}
