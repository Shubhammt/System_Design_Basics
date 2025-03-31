#pragma once
#include <iostream>

class drive_strategy{
    public:
        virtual void drive() = 0;
};

class sports_drive: public drive_strategy{
    public:
        void drive(){
            std::cout<<"sports drive"<<std::endl;
        }
};

class normal_drive: public drive_strategy{
    public:
        void drive(){
            std::cout<<"normal drive"<<std::endl;
        }
};