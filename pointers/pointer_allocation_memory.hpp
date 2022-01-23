#include<iostream>

using namespace std;


void allocate_memory(){
    int *mem_ptr {nullptr};

    mem_ptr = new int;

    cout<<mem_ptr<<endl;
    cout<<*mem_ptr<<endl;
    *mem_ptr =100;
    cout<<*mem_ptr<<endl;
    cout << "------------------------end memory allocation pointer----------------------------------" << endl;
}

void allocate_memory_array()
{
    int *mem_arr_ptr{nullptr};
    int size {};
    cout<<"How many memory do you want to allocate"<<endl;
    cin>>size;

    mem_arr_ptr = new int[size];

    delete[] mem_arr_ptr;

    cout << "------------------------end memory array allocation pointer----------------------------------" << endl;
}

void array_and_pointer_relationships(){

    //arrays
    
    int score[] {100,300,700};
    
    cout<<score<<endl; 
    cout<<*score<<endl;

    // pointers
    int *score_ptr {score};

    cout<<(score_ptr+1)<<endl;
    cout<<*score_ptr<<endl;
}
