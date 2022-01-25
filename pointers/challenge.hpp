#include <iostream>
using namespace std;
void print(int arr[],size_t size);
int *apply_all(int arr1[],size_t arr1_size,int arr2[],size_t arr2_size);

int *apply_all(int arr1[], size_t arr1_size, int arr2[], size_t arr2_size){
    int *both_arrays {nullptr};
    both_arrays = new int[arr1_size*arr2_size];
    int count {0};

    for (size_t i = 0; i < arr1_size; i++)
    {
        /* code */
        for (size_t b = 0; b < arr2_size; b++)
        {
            /* code */
            *(both_arrays + count) = arr1[i] * arr2[b];
            count += 1;
        }

        
    }

    return both_arrays;
    
}


void print(int arr[],size_t size){
    cout<<"[";
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i];

        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
    
}