#include <iostream>
#include "cmake-build-debug/Car.h"
#include "cmake-build-debug/Audi.h"
#include "cmake-build-debug/Bmw.h"
#include "cmake-build-debug/Mercedes.h"
#include "cmake-build-debug/Volkswagen.h"

using namespace std;
int main() {

    auto *bmw = new Bmw (2500, "manual", 177, 400, 250, "black", true);
    cout << bmw->GetColor() << endl;
    cout << bmw->GetSportPack() << endl;


    auto *volkswagen = new Volkswagen(1989, "manual", 140, 350, 190, "passat cc", 2014);
    OutputInfo(*volkswagen);
    return 0;
}
