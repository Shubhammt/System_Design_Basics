#pragma once
#include<iostream>
#include "base.h"

class child: public base{
    public:
        void function(int a){
            std::cout<<"Successfully added "<<a<<std::endl;
        }
};