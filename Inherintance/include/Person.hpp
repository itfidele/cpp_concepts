#ifndef __PERSON_H__
#define __PERSON_H__

#include "Account.hpp"
using namespace std;

class Person:public Account{
    string name;

    public:
        Person(string name);
        void greetings();
};

#endif // __PERSON_H__