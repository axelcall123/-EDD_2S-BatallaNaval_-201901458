#include "hpp/ListaLista.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor

template <typename T>
ListaListaH<T>::ListaListaH()
{
    primero=nullptr;
    final = nullptr;
}
//tipo|void NombreClass::NombreMetodo(valores...)
template <typename T>
void ListaListaH<T>::InsertarAlInicio(Nodo<T> *nuevo, T info)
{
    nuevo=new struct Nodo<T>();
    nuevo->info=info;
    //[3:p]->[2]->[1:f]:n # insertado
    if(primero==nullptr){
        primero=nuevo;
        final = primero; // extra
    }else{
        nuevo->sig=primero;
        primero=nuevo;
    }
}

template <typename T>
//*aux=SIG->SIG->SIG
void ListaListaH<T>::InsertarZP1(Nodo<T> *aux, T buscarCat, T info)//BUSCAR SI EXISTE
{
    /*
    [a]
     ↓{sig}
    [b]->{ant}[b1]->{sig}[b2]->{sig}[b3]
     ↓{sig}
    [c]
    */
    aux = new struct Nodo<T>();
    aux=primero;
    //BUSCAR NODO
    while(buscarCat!=aux->info && aux->sig!=nullptr){
        aux=aux->sig;
    }
    //INSERTAR NODO
    /*
    [a]
     ↓{sig}
    [b]->{ant}[info]
    ...
     */
    if(aux==final){//CREAR NUEVO NODO
        InsertarAlInicio(NULL,buscarCat);//ENVIO NUEVA INFO
        InsertarZP2(primero,NULL,info);
        /*primero->ant = aux2; // INSERTO AL INICIO [creado]->{ant}[info]*/
    }else{//SI ENCONTRO EL NODO
        InsertarZP2(aux,NULL, info);
        /*aux->ant = aux2; //[b]->{ant}[info]*/
    }
}

template <typename T>
void ListaListaH<T>::InsertarZP2(Nodo<T> *aux, Nodo<T> *aux2, T info)
{
    if(aux->ant==nullptr){//[b]->
        aux2= new struct Nodo<T>();
        aux2->info=info;
        aux->ant=aux2;
    }else{//[b]->{ant}[b1]->{sig}[b2]
        aux2 = new struct Nodo<T>();
        aux2->info = info;
        aux2->sig=aux->ant;
        aux->ant=aux2;
    }
}
