#pragma once

class base{
    public:
        virtual int cost() = 0;
};

class margarita: public base{
    public:
        int cost(){
             return 100;
        }
};

class veggies: public base{
    public:
        int cost(){
             return 50;
        }
};