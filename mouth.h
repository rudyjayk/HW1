#ifndef MOUTH_H
#define MOUTH_H

#include "cat.h"
#include <iostream>
using namespace std;

class Mouth{
    public:
    //Just to define composotion of classes
        void open(){

           
           cout << "Opens mouth" << endl;
        }

        void close(){

            
            cout << "Closes Mouth" << endl;
        }
};
#endif