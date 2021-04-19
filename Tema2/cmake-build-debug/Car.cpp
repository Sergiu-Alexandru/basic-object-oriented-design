#include "Car.h"

Car::Car(int capacity, string gearbox, float hp, int torque, float topSpeed) {

    engineType = new class EngineType();

    this->capacity = capacity;
    this->hp = hp;
    this->torque = torque;
    this->gearbox = move(gearbox);
    this->topSpeed = topSpeed;
    this->engine = engineType->Type;
}

void Car::EngineOn() {
    cout << "Engine On!";
}

void Car::EngineOff() {
    cout << "Engine Off!";
}

Car::~Car() = default;
