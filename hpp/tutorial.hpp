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
    movimiento mov;
public:
    void ob(string ancho,string alto, movimiento mov);
    //ancho
        string re_ancho();
        string re_alto();
        movimiento re_movimiento();
};
#endif