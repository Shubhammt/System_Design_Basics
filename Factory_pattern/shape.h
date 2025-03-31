#pragma once
#include <iostream>

class shape{
    public:
        virtual void draw() = 0;
};

class rectangle: public shape{
    public:
        void draw(){
            std::cout<<"this is a rectangle"<<std::endl;
        }
};

class circle: public shape{
    public:
        void draw(){
            std::cout<<"this is a circle"<<std::endl;
        }
};