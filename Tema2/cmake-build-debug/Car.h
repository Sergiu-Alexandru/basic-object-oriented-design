#ifndef TEMA2_CAR_H
#define TEMA2_CAR_H

#include <iostream>
#include <string>
#include "StatusCar.h"
#include "EngineType.h"

class Car : public StatusCar {
private:

    int capacity;
    float hp;
    int torque;
    string gearbox;
    float topSpeed;
    string engine;

    class EngineType *engineType;

public:

    Car (int capacity, string gearbox, float hp, int torque, float topSpeed);

    void EngineOn() override;
    void EngineOff() override;

    ~Car();
};
#endif //TEMA2_CAR_H
