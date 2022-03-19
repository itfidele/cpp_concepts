//
// Created by fidele on 23/02/2022.
//

#ifndef C__CONCEPTS_MYSTRING_HPP
#define C__CONCEPTS_MYSTRING_HPP
#include <iostream>

class String{
    private:
        std::string text;
    
    public:
        //String(std::string txt);
        ~String();
        void operator=(std::string txt);
        void operator+=(std::string str);
        std::string getText(){ return text; }
};


#endif //C__CONCEPTS_MYSTRING_HPP
