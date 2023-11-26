#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Wheel {
public:
    Wheel(double diameter, const string& tire_type) : diameter(diameter), tire_type(tire_type) {}


private:
    double diameter;
    string tire_type;
};
