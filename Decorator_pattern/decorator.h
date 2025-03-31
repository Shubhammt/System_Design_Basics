#pragma once
#include "base.h"

class decorator: public base{
};

class cheese: public decorator{
    base *pizza;
    public:
        cheese(base &pizza){
            this->pizza = &pizza;
        }
        int cost() {
            return this->pizza->cost()+30;
        }
};

class mushroom: public decorator{
    base *pizza;
    public:
        mushroom(base &pizza){
            this->pizza = &pizza;
        }
        int cost() {
            return this->pizza->cost()+55;
        }
};