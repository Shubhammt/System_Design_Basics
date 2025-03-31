#pragma once
#include <iostream>
#include "single_responsibility.h"

// O - open for extension, closed for modification
class print{
    virtual void get_data()=0;
};
class print_type_1: public print{
    private:
        farm *f;
    public:
        print_type_1(farm &f){
            this->f = &f;
        }
        void get_data(){
            cout<<f->get_type()<<endl;
        }
};
class print_type_2: public print{
    private:
        farm *f;
    public:
        print_type_2(farm &f){
            this->f = &f;
        }
        void get_data(){
            cout<<f->get_type()+"_new_animal"<<endl;
        }
};