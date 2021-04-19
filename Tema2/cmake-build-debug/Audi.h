#ifndef TEMA2_AUDI_H
#define TEMA2_AUDI_H

#include <string>
#include "Car.h"

using namespace std;

class Audi : public Car {
private:
    string model;
    int year;

public:
    Audi(int capacity, string gearbox, float hp, int torque, float topSpeed, string model, int year);

    string GetModel ();
    int GetYear();

    ~Audi ();
};


#endif //TEMA2_AUDI_H
