#include <iostream>
#include "hpp/tutorial.hpp"
using namespace std;
void tutorialH::ob(string ancho, string alto, movimiento mov)
{
    this->ancho = ancho;
    this->alto = alto;
    this->mov = mov;
};
string tutorialH::re_ancho() { return ancho; };
string tutorialH::re_alto() { return alto; };
movimiento tutorialH::re_movimiento() { return mov; };