#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::initmembers(char * ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    CurSpeed = 0;
}
void Car::showcarstate(){
    cout << "print car state" << endl;
}
void Car::accel(){
    cout << "input accel func" << endl;
}

void Car::Break(){
    cout << "input break func" << endl;
}
