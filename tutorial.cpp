#include <iostream>
#include "hpp/tutorial.hpp"
using namespace std;
void tutorialH::ob(string ancho, string alto, movimientoH mov)
{
    this->ancho = ancho;
    this->alto = alto;
    this->mov = mov;
};

string tutorialH::re_ancho() { return this->ancho; };
string tutorialH::re_alto() { return this->alto; };
movimientoH tutorialH::re_movimiento() { return this->mov; };