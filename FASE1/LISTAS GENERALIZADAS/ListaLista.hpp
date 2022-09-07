#ifndef LISTALISTA_H
#define LISTALISTA_H
#include "nodoKT.hpp"
using namespace std;
//<string,class>
template <class K,class T>
// HEREDA: HIJO:PADRE
struct ListaListaH
{
    NodoKT<K,T> *primero;
    NodoKT<K,T> *final; // extra SOLO PARA TENERLO IGUAL QUE EN LA LISTA SIMPLE
    ListaListaH(); // constructor
    // metodos{func}
    //
    void InsertarAlInicio(NodoKT<K,T> *nodoN, K dato);
    void InsertarZP1(NodoKT<K,T> *nodoAux,K datoBuscar,T dato);//BUSCA SI EXISTE EL NODO
    private:
        void InsertarZP2(NodoKT<K,T> *nodoAux, NodoKT<K,T> *nodoAux2, T dato); // CREA EL NODO [b]->{ant}[b1]->{sig}[b2]
};
#endif