#include "Car.h"

int main(){
    Car run99;
    run99.initmembers("run99", 100);
    run99.accel();
    run99.Break();
    run99.showcarstate();
    return 0;
}
