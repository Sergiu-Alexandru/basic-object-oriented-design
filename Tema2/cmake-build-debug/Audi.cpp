#include "Audi.h"

string Audi::GetModel() {
    return this->model;
}

int Audi::GetYear() {
    return this->year;
}

Audi::Audi(int capacity, string gearbox, float hp, int torque, float topSpeed, string model, int year) : Car(capacity, move(gearbox), hp, torque, topSpeed) {

    this->year = year;
    this->model = move(model);
}

Audi::~Audi() = default;



