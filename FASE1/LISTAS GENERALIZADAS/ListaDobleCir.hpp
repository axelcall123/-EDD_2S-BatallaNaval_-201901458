#ifndef LISTADOBLECIR_H
#define LISTADOBLECIR_H
#include "nodo.hpp"
template <class T> 
struct ListaDobleCirH
{
private:
    Nodo<T> *lc;
    int tam;  
public:
    ListaDobleCirH(); // constructor
    // metodos{func}
    void Insertar(Nodo<T> *nodoN,T info);
    void modificar(Nodo<T> *aux, T ninkName, T edad, T password);
    void buscar(int tamanio);
};
#endif