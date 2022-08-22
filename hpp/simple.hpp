#ifndef SIMPLE_H
#define SIMPLE_H
#include "nodo.hpp"
template <class T>
struct SimpleH
{
    Nodo<T> *primero;
    SimpleH(); // constructor
    // metodos{func}
    void InsertarAlInicio(Nodo<T> *nodoN, T info);
};
#endif