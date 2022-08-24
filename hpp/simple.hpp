#ifndef SIMPLE_H
#define SIMPLE_H
#include "nodo.hpp"
template <class T>
struct SimpleH
{
    private:
        Nodo<T> *primero;
        Nodo<T> *final;
        int tam;
    public:
    SimpleH(); // constructor
    // metodos{func}
    void InsertarAlInicio(Nodo<T> *nodoN, T dato); // PUSH,PILA
    void InsertarAlFinal(Nodo<T> *nodoN, T dato);  // INSERTAR,COLA
    T Sacar();                                     // POP, ELIMINAR
    bool vacia();                                  //SI ESTA VACIO
};
#endif