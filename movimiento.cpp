#include "hpp/movimiento.hpp"
#include <iostream>
using namespace std;
void movimientoH::ob(string x, string y){
    this->x = x;
    this->y = y;
};
string movimientoH::re_x() { return this->x; };
string movimientoH::re_y() { return this->y; };