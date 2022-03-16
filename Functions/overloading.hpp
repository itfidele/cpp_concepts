#include <iostream>
#include <string>

using namespace std;

/*
    overloading is the process where function use the same name by with different
    parameters 
*/

void greet(string firstname); // function prototype
void greet(string firstname,string lastname);

void greet(string firstname){
    // it will greet with the name provided by user
    cout<<"> Hello "<<firstname;
    cout<<endl;
}

// void greet(string firstname,string lastname){
//     // it will display both names if both names are provided
//     cout<<"> "<<firstname+" "+lastname;
//     cout<<endl;
// }

