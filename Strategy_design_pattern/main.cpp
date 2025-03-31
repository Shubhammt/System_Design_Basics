#include "vehicle.h"

int main(){
    sports_drive s;
    normal_drive n;
    vehicle *v;
    sports_vehicle sp(s);
    v = &sp;
    v->drive();
    sp.drive();
    return 0;
}