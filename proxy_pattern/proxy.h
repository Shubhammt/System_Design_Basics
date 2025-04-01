#pragma once
#include "base.h"
#include "child.h"

class proxy: public base{
    private:
        child *c;
    public:
        proxy(child &c){
            this->c = &c;
        }
        void function(int a){
            if(a>0){
                c->function(a);
            }else{
                std::cout<<"Error!! Cannot proceed"<<std::endl;
            }
        }
};