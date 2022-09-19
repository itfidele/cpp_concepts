#include<iostream>
#include <string>

using namespace std;

void changeArray(int numbers[],size_t size);
void greet(string firstname);
void greet(string firstname, string lastname);
void change_number(int &one);
void greet(string firstname)
{
    cout << "Helloooo " + firstname << endl;
}

void greet(string firstname, string lastname)
{
    cout << firstname + " " + lastname << endl;
}



void changeArray(int numbers[],size_t size){
    for(int i{0}; i<size;i++)
        numbers[i]=3;
}

void change_number(int &one){
    int &a = one;
    a=50;
}

