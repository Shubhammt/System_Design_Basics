#pragma once
#include<string>
#include "shape.h"

class shapeFactory{
    public:
        shape* getShape(int s){
            switch(s){
                case 0:
                    return new circle;
                case 1:
                    return new rectangle;
                default:
                    return nullptr;
            }
        }
};