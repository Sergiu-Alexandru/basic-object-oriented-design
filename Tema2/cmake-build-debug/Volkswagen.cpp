#include "Volkswagen.h"

Volkswagen::Volkswagen(int capacity, string gearbox, float hp, int torque, float topSpeed, string model, int year) : Car(capacity, move(gearbox), hp, torque, topSpeed) {

    this->model = move(model);
    this->year = year;
}

string Volkswagen::GetModel() {
    return this->model;
}

int Volkswagen::GetYear() {
    return this->year;
}

void OutputInfo(const Volkswagen &volkswagen) {
    cout << "Model: " << volkswagen.model << endl;
    cout << "Year: " << volkswagen.year << endl;
}

Volkswagen::~Volkswagen() = default;