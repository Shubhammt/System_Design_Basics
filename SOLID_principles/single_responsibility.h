#pragma once
#include<string>
using namespace std;

// S - Single Responsiblity
// A class should have only one
// reason to change
class animal{
    private:
        int legs;
        string type;
    public:
        animal(int legs, string type){
            this->legs = legs;
            this->type = type;
        }
        string get_type(){
            return type;
        }
};

class farm{
    private:
        animal *A;
        int count;
    public:
        farm(animal &A, int count){
            this->A = &A;
            this->count = count;
        }
        string  get_type(){
            return A->get_type();
        }
        // Any additional fucntions would violate single responsibility
};