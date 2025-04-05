#pragma once
#include "filesystem.h"

class file: public filesystem{
    std::string name;
    public:
        file(std::string name){
            this->name = name;
        }
        void ls(){
            std::cout<<this->name<<std::endl;
        }
};