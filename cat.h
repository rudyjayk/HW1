#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include "mouth.h"
#include <string>
#include <iostream>

using namespace std;

class Cat: public Animal{
    private:
    //Cat has a mouth
        Mouth me;
    public:
        //Basic Constructor that will be used to call animal class for inheritance
        Cat(string name, int age) : Animal(name, age){}
        
        //Uses Mouth class to interact
        void interact(){

            me.open();
            me.close();
        }

};
#endif
