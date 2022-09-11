#ifndef LISTALISTA_H
#define LISTALISTA_H
#include "nodos.hpp"
//CLASE
#include "clases.hpp"
using namespace std;
//<string,class>
template <class K, class T>
// HEREDA: HIJO:PADRE
struct ListaListaH
{

    ListaListaH(); // constructor
    // metodos{func}
    void InsertarAlInicio(NodoKT<K, T>* nodoN, K dato);
    void InsertarZP1(NodoKT<K, T>* nodoAux, K datoBuscar, T dato);//BUSCA SI EXISTE EL NODO
    void recorrerAll(NodoKT<K, T>* nodoAux, NodoKT<K, T>* nodoAux2);
    void ordenarMM(NodoKT<K, T>* nodoAux, NodoKT<K, T>* nodoAux2, NodoKT<K, T>* auxReg); // ORDENA MIN A MAY Y VICEVERSA
    string graficarTXT(NodoKT<K, T>* nodoAux, NodoKT<K, T>* nodoAux2);
private:
    void InsertarZP2(NodoKT<K, T>* nodoAux, NodoKT<K, T>* nodoAux2, T dato); // CREA EL NODO [b]->{ant}[b1]->{sig}[b2]
    NodoKT<K, T>* primero;
    NodoKT<K, T>* final; // extra SOLO PARA TENERLO IGUAL QUE EN LA LISTA SIMPLE
    int tamSub;
};
#endif

#ifndef LISTADOBLECIR_H
#define LISTADOBLECIR_H
#include "nodos.hpp"
// 256->mine


#include "funciones.hpp"
template <class T>
struct ListaDobleCirH
{
private:
    Nodo<T>* lc;
    int tam;
public:
    ListaDobleCirH(); // constructor
    // metodos{func}
    void Insertar(Nodo<T>* nodoN, T info);
    void modificar(Nodo<T>* aux, string newNick, string edad, string password);//MODIFICA EL NODO
    Nodo<T>* buscarU(Nodo<T>* aux, string nombre);//BUSCA SOLO POR NICK
    Nodo<T>* buscarD(Nodo<T>* aux, string nombre, string pass);//BUSCA POR NICK Y VERIFICA SI EL PASS ES CORECTO
    Nodo<T>* buscarNick(Nodo<T>* nodoAux, string nombre);
    void eliminar(Nodo<T>* aux, Nodo<T>* aux2);
    string graficarTXT(Nodo<T>* aux);

};
#endif

#ifndef SIMPLE_H
#define SIMPLE_H
#include "nodos.hpp"
using namespace std;
template <class T>
struct SimpleH
{
private:
    Nodo<T>* primero;
    Nodo<T>* final;
    int tam;
public:
    SimpleH(); // constructor
    // metodos{func}
    void InsertarAlInicio(Nodo<T>* nodoN, T dato); // PUSH,PILA
    void InsertarAlFinal(Nodo<T>* nodoN, T dato);  // INSERTAR,COLA
    T Sacar();
    string graficarTXT(Nodo<T>* nodoAux);                          // POP, ELIMINAR
    bool vacia();                                  //SI ESTA VACIO
};
#endif