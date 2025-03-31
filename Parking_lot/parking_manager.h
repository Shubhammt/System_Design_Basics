#pragma once
#include "parking_spot.h"

class parkingManager{
    public:
        virtual parkingSpot findParking() = 0;
        virtual void addParking(parkingSpot &p) = 0;
        virtual void removeparking() = 0;
};