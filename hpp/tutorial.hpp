#ifndef TUTORIAL_H
#define TUTORIAL_H
#include <iostream>
#include "movimiento.hpp"
using namespace std;
class tutorialH
{
private:
    string ancho;
    string alto;
    movimientoH mov;
public:
    void ob(string ancho,string alto, movimientoH mov);
    string re_ancho();
    string re_alto();
    movimientoH re_movimiento();
};
#endif