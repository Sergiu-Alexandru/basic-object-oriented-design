#ifndef TEMA2_MERCEDES_H
#define TEMA2_MERCEDES_H

#include <string>
#include "Car.h"

using namespace std;

class Mercedes : public Car {
private:
    bool luxuryPack;
    string modelPack;

public:
    Mercedes(int capacity, string gearbox, float hp, int torque, float topSpeed, bool luxuryPack, string modelPack);

    bool GetLuxuryPack();
    string GetModelPack();

    ~Mercedes();
};

class E_Class : public Mercedes {
private:
    string model;
    int manufacturingYear;
    bool isSedan;

public:

    E_Class (int capacity, string gearbox, float hp, int torque, float topSpeed, bool luxuryPack, string modelPack, string model, int manufacturingYear, bool isSedan);

    string GetModel();
    int GetManufacturingYear();
    bool GetIsSedan();

    ~E_Class();
};
#endif //TEMA2_MERCEDES_H
