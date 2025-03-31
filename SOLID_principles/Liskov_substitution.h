#include "Open_extension_closed_modification.h"

// L - Liskov Substitution principle
// If B is child of A, the B can replace A
// without breaking code. I.E, B should extend
// capability, not narrow it down

class vehicle{
    private:
        int wheels;
    public:
        bool hasengine(){
            return true;
        }
};

class car: public vehicle{
    public:
        bool hasengine(){
            return true;
        }
};
class cycle: public vehicle{
    public:
        bool hasengine(){
            return NULL;
        }
};

void getengine(vehicle &v){
    cout<<v.hasengine()<<endl;
}