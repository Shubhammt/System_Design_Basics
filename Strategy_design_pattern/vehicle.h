#pragma once
#include "drive_strategy.h"

class vehicle{
    protected:
        drive_strategy *driveObj;
    public:
        vehicle(drive_strategy &d){
            this->driveObj = &d;
        }
        void drive(){
            driveObj->drive();
        }
};

class sports_vehicle: public vehicle{
    public:
        sports_vehicle(sports_drive &d):vehicle(d){
        }
};
