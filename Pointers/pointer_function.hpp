#include <iostream>
#include <string>

using namespace std;

string *create_array(size_t size,string initial_value){
    string *arr {nullptr};
    arr= new string[size];

    for (size_t i {0}; i < size; i++)
        *(arr+i) = initial_value;

    return arr;
}