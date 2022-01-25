#include<iostream>
#include <vector>
#include "func.hpp"
#include "overloading.hpp"

int main(int argc, char const *argv[])
{
    int numm {30};
    cout<<numm<<endl;
    change_number(numm);    
    cout << numm<<endl;

    /* 
        ///Overloading
    cout << "Overloading program example" << endl
         << endl;
    cout << "greet() function with only first name" << endl;
    greet("Fidele");
    cout << "greet() function with both firstname and lastname" << endl; // output : Hello Fidele
    greet("Fidele", "Kirezi");                                           // output : Fidele Kirezi
    cout << endl;
    */

    return 0;
}
