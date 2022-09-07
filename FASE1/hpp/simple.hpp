#ifndef SIMPLE_H
#define SIMPLE_H
#include "nodo.hpp"
using namespace std;
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
    T Sacar();
    string graficarTXT(Nodo<T> *nodoAux);                          // POP, ELIMINAR
    bool vacia();                                  //SI ESTA VACIO
};
#endif