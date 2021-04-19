#ifndef TEMA2_VOLKSWAGEN_H
#define TEMA2_VOLKSWAGEN_H

#include <string>
#include "Car.h"

using namespace std;

class Volkswagen : public Car {
private:
    string model;
    int year;

    friend void OutputInfo(const Volkswagen &volkswagen);
public:
    Volkswagen(int capacity, string gearbox, float hp, int torque, float topSpeed, string model, int year);

    string GetModel();
    int GetYear();

    ~Volkswagen();
};


#endif //TEMA2_VOLKSWAGEN_H
