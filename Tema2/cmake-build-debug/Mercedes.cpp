#include "Mercedes.h"

bool Mercedes::GetLuxuryPack() {
    return this->luxuryPack;
}

string Mercedes::GetModelPack() {
    return this->modelPack;
}

Mercedes::Mercedes(int capacity, string gearbox, float hp, int torque, float topSpeed, bool luxuryPack , string modelPack) : Car(capacity, move(gearbox), hp, torque, topSpeed) {

    this->luxuryPack = luxuryPack;
    this->modelPack = move(modelPack);
}

Mercedes::~Mercedes() = default;

E_Class::E_Class(int capacity, string gearbox, float hp, int torque, float topSpeed, bool luxuryPack, string modelPack,
                 string model, int manufacturingYear, bool isSedan) : Mercedes(capacity, move(gearbox), hp, torque, topSpeed, luxuryPack, move(modelPack)){

    this->model = move(model);
    this->manufacturingYear = manufacturingYear;
    this->isSedan = isSedan;
}

string E_Class::GetModel() {
    return this->model;
}

int E_Class::GetManufacturingYear() {
    return this->manufacturingYear;
}

bool E_Class::GetIsSedan() {
    return this->isSedan;
}

E_Class::~E_Class() = default;
