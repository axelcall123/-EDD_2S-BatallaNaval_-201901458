#include "hpp/simple.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor

template <typename T>SimpleH<T>::SimpleH()
{
    primero=nullptr;
}
//tipo|void NombreClass::NombreMetodo(valores...)
template <typename T>
// NULL PARA NO CREAR DOS VARIABLES CON EL MISMO APUNTADOR
void SimpleH<T>::InsertarAlInicio(Nodo<T> *nuevo, T info)
{
    nuevo=new struct Nodo<T>();
    nuevo->info=info;
    if(primero==nullptr){
        primero=nuevo;
    }else{
        nuevo->sig=primero;
        primero=nuevo;
    }
}
