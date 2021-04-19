#include "Bmw.h"


string Bmw::GetColor() {
    return this->color;
}

int Bmw::GetSportPack() {
    return this->sportPack;
}

Bmw::Bmw(int capacity, string gearbox, float hp, int torque, float topSpeed, string color, bool sportPack) : Car(capacity, move(gearbox), hp, torque, topSpeed) {

    this->color = move(color);
    this->sportPack = sportPack;
}

Bmw::~Bmw() = default;


