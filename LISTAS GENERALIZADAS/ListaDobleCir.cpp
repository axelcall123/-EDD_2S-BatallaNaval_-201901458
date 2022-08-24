#include "hpp/ListaDobleCir.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor

template <typename T>ListaDobleCirH<T>::ListaDobleCirH()
{
    tam=0;
    lc=nullptr;
}
//tipo|void NombreClass::NombreMetodo(valores...)
template <typename T>
//NULL PARA NO CREAR DOS VARIABLES CON EL MISMO APUNTADOR
void ListaDobleCirH<T>::Insertar(Nodo<T> *nuevo, T info)
{
    nuevo=new struct Nodo<T>();
    nuevo->info=info;
    nuevo->sig=nuevo;
    nuevo->ant=nuevo;
    if(lc!=NULL){
        nuevo->ant = lc;
        lc->sig->ant = nuevo;
        nuevo->sig=lc->sig;       
        lc->sig=nuevo;
    }
    lc=nuevo;
    tam+=1;
    //delete nuevo;
}
template <typename T>
void ListaDobleCirH<T>::modificar(Nodo<T> *aux,T nick,T edad, T password){
    aux = new struct Nodo<T>();
    int tamSig=0;
    //info usuario.nick{string}
    while(tam>tamSig && nick!=aux->**info){
        aux=aux->sig;
    }
};
template <typename T>
void ListaDobleCirH<T>::buscar(int nombre){

};
