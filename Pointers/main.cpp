#include<iostream>
#include "accessing_pointer.hpp"
#include "pointer_allocation_memory.hpp"
#include "pointers_function_passbyvalue.hpp"
#include "pointer_function.hpp"
#include "challenge.hpp"
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    accessing_pointer(); 
    allocate_memory();
    allocate_memory_array();
    array_and_pointer_relationships();

    
    int scores[] {100,50,30,40,60};

    int *score_ptr {scores};
    
    while (*score_ptr != 60)
    {
        cout<<*score_ptr<<endl;
        score_ptr++;
    }
    

    
    int num {10};
    cout<<num<<endl;
    square_root(&num);
    cout<<num<<endl;
    



    
    auto names = create_array(10,"Fidele Ni Umuti");

    for (size_t i = 0; i < 10; i++)
    {
        cout<<names[i]<<endl;
    }
    

     
    vector<string> programmings {"Python","c++","javascripts"};

    for(auto programming:programmings)
        programming = "Python"; // this won't change it

    for (auto &programming : programmings) // this line will make a change
        programming = "Python"; // this won't change it

    for (auto programming : programmings)
        cout<<programming<<endl;
    

    
        ///test the challenge from challenge.hpp dynamic allocation using pointers

    int arr1[] { 1, 2, 3, 4, 5 };
    int arr2[] { 10, 20, 30 };

    int *results = apply_all(arr1,5,arr2,3);

    print(results,15);
    
   
    return 0;
}
