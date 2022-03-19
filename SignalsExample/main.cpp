
#include <iostream>
#include <signal.h>
#include <string>

using namespace std;

sig_atomic_t signal_variable = 0; // this is gonna be changed on raised signal

void signal_handler_fuction(int var){
    // this function is going to act as a handler of a signal
    signal_variable = 10;
}

int main(){
    void (*prev_handler)(int);
    prev_handler = signal(SIGINT,signal_handler_fuction);

    raise(SIGINT);

    cout<<signal_variable<<endl;
    return 0;
}