#include "../hpp/clases.hpp"
#include <iostream>
using namespace std;
movimientoH::movimientoH(){
    this->x="0.5";
    this->y = "0.5";
    //this->nombre="фис";//abc
};
void movimientoH::ob(string x, string y/*,string n*/){
    this->x = x;
    this->y = y;
    //this->nombre=n;
};
string movimientoH::re_x() { return this->x; };
string movimientoH::re_y() { return this->y; };
//string movimientoH::re_nombre() { return this->nombre; };