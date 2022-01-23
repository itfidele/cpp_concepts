#include<iostream>
using namespace std;
void accessing_pointer(){
    int score {10};
    int *score_ptr {&score};

    cout<<"Accessing Pointers"<<endl;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    *score_ptr= 300;

    

    cout<<*score_ptr<<endl;
    cout<<score<<endl;
    
    cout<<endl;
    cout<<"------------------------end accessing pointer----------------------------------"<<endl;
}
