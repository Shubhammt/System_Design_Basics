#pragma once
#include "filesystem.h"



class directory: public filesystem{
    private:
        std::string name;
        std::vector<filesystem*> files;
    public:
        directory(std::string name){
            this->name = name;
        }
        void add(filesystem* file){
            files.push_back(file);
        }
        void ls(){
            std::cout<<name<<std::endl;
            for(int i = 0; i<files.size(); i++){
                files[i]->ls();
            }
        }
};