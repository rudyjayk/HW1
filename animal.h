#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal{
    private:
        string name;
        int age;
    public:
    //Constructor that is created and stores name and age of animal
        Animal(string n_in, int a_in){
            name = n_in;
            age = a_in;
            cout << name << " is " << age << " years of age!" << endl;
        }
};
#endif
