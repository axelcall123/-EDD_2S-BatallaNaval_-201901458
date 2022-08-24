#ifndef LISTADOBLECIR_H
#define LISTADOBLECIR_H
#include "nodo.hpp"
// 256->mine
#include "shaDCS.hpp"
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
    void modificar(Nodo<T> *aux,string newNick, string edad, string password);
    Nodo<T> *buscarU(Nodo<T> *aux, string nombre);
    Nodo<T> *buscarD(Nodo<T> *aux, string nombre, string pass);
    void eliminar(Nodo<T> *aux,Nodo<T> *aux2);
};
#endif