
//This cpp file is used for quesitons 27 and 28 only. The rest of the questions are answered in the hw1.txt file
//Also all header files and class declarations are in the headers folder

#include "animal.h"
#include "cat.h"
#include "mouth.h"
#include "circle.h"

#include <string>
#include <iostream>
using namespace std;

int main(){

    Cat one("Rascal", 7);
    one.interact();

    Circle first(10);
    Circle second(12);
    Circle third;

    third = first + second;

    cout << "Radius for third circle is: " << third.getRadius() << endl;
}