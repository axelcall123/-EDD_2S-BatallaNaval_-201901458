#ifndef LISTALISTA_H
#define LISTALISTA_H
#include "nodo.hpp"
template <class T>
// HEREDA: HIJO:PADRE
struct ListaListaH
{
    Nodo<T> *primero;
    Nodo<T> *final;//extra SOLO PARA TENERLO IGUAL QUE EN LA LISTA SIMPLE
    ListaListaH(); // constructor
    // metodos{func}
    void InsertarAlInicio(Nodo<T> *nodoN, T dato);
    void InsertarZP1(Nodo<T> *nodoAux,T datoBuscar,T dato);//BUSCA SI EXISTE EL NODO
    private:
        void InsertarZP2(Nodo<T> *nodoAux, Nodo<T> *nodoAux2, T dato); // CREA EL NODO [b]->{ant}[b1]->{sig}[b2]
};
#endif