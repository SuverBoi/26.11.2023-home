#pragma once
#include <iostream>
#include <vector>
#include "Wheel.h"
using namespace std;
class Car {
public:
    Car(const vector<Wheel>& wheels) : wheels(wheels), is_moving(false) {}

    void start() {
        if (!is_moving) {
            cout << "Car is starting to move." << endl;
            is_moving = true;
        }
        else {
            cout << "Car is already moving." << endl;
        }
    }

    void stop() {
        if (is_moving) {
            cout << "Car is stopping." << endl;
            is_moving = false;
        }
        else {
            cout << "Car is already stopped." << endl;
        }
    }

private:
    vector<Wheel> wheels;
    bool is_moving;
};
