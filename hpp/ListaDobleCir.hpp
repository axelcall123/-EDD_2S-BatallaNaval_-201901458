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
    void modificar(Nodo<T> *aux,string newNick, string edad, string password);//MODIFICA EL NODO
    Nodo<T> *buscarU(Nodo<T> *aux, string nombre);//BUSCA SOLO POR NICK
    Nodo<T> *buscarD(Nodo<T> *aux, string nombre, string pass);//BUSCA POR NICK Y VERIFICA SI EL PASS ES CORECTO
    void eliminar(Nodo<T> *aux,Nodo<T> *aux2);
    string graficarTxt(Nodo<T> *aux);
};
#endif