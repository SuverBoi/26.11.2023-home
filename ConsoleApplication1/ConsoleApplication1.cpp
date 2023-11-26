#include <iostream>
#include <vector>
#include "Wheel.h"
#include "Car.h"
using namespace std;

int main()
{
    Wheel frontLeftWheel(18.0, "Summer");
    Wheel frontRightWheel(18.0, "Summer");
    Wheel rearLeftWheel(18.0, "Summer");
    Wheel rearRightWheel(18.0, "Summer");

    vector<Wheel> carWheels = { frontLeftWheel, frontRightWheel, rearLeftWheel, rearRightWheel };

    Car myCar(carWheels);

    myCar.start();
    myCar.stop();

}