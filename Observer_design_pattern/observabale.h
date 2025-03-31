#pragma once
#include<map>
#include "observer.h"

class observable{
    public:
        virtual void add(observer &o) = 0;
        virtual void remove(observer &o) = 0;
        virtual void notify() = 0;
        virtual void setData(int count) = 0;
        virtual void getData() = 0;
};



