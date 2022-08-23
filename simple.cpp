#include "hpp/simple.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor
template <typename T>
SimpleH<T>::SimpleH()
{
    primero = nullptr;
    final = nullptr;
}
// tipo|void NombreClass::NombreMetodo(valores...)
template <typename T>
void SimpleH<T>::InsertarAlInicio(Nodo<T> *nuevo, T info) // PUSH,PILA
{
    nuevo = new struct Nodo<T>();
    nuevo->info = info;
    //[3:p]->[2]->[1:f]:n # insertado
    if (primero == nullptr)
    {
        primero = nuevo;
        final = primero; // extra
    }
    else
    {
        nuevo->sig = primero;
        primero = nuevo;
    }
    //delete nuevo,info;
}
template <typename T>
void SimpleH<T>::InsertarAlFinal(Nodo<T> *nuevo, T info) // INSERTAR,COLA
{
    nuevo = new struct Nodo<T>();
    nuevo->info = info;
    //[1:p]->[2]->[3:f]:n #insertado
    if (primero == nullptr)
    {
        primero = nuevo;
        final = primero; // extra
    }
    else
    {
        final->sig = nuevo;
        final = nuevo;
    }
    //delete nuevo,info;
}

template <typename T>
T SimpleH<T>::Sacar()
{
    //[a:p]->[b]->[c:f]
    //[a]  [b:p]->[c:f]
    T dato;
    dato = primero->info; // OBTENGO LA INFO
    primero = primero->sig;
    return dato;
}