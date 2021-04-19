#ifndef TEMA2_BMW_H
#define TEMA2_BMW_H

#include <string>
#include "Car.h"

using namespace std;

class Bmw : public Car{
private:
    string color;
    bool sportPack;

public:
    Bmw(int capacity, string gearbox, float hp, int torque, float topSpeed, string color, bool sportPack);

    string GetColor();
    int GetSportPack();

    ~Bmw ();
};


#endif //TEMA2_BMW_H
