#include "hpp/ListaLista.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor
using namespace std;
template <typename K,typename T>
ListaListaH<K,T>::ListaListaH()
{
    primero=nullptr;
    final = nullptr;
}
//tipo|void NombreClass::NombreMetodo(valores...)
template <typename K, typename T>
void ListaListaH<K,T>::InsertarAlInicio(NodoKT<K,T> *nuevo, K info)
{
    nuevo=new struct NodoKT<K,T>();
    nuevo->infoK=info;
    //[3:p]->[2]->[1:f]:n # insertado
    if(primero==nullptr){
        primero=nuevo;
        final = primero; // extra
    }else{
        nuevo->sig=primero;
        primero=nuevo;
    }
    //delete nuevo;
}

template <typename K, typename T>
//*aux=SIG->SIG->SIG
void ListaListaH<K,T>::InsertarZP1(NodoKT<K,T> *aux, K buscarCat, T info) // BUSCAR SI EXISTE
{
    /*
    [a]
     ↓{sig}
    [b]->{ant}[b1]->{ant}[b2]->{ant}[b3]
     ↓{sig}
    [c]
    */
    aux = new struct NodoKT<K,T>();
    aux=primero;
    //BUSCAR NODO
    while(buscarCat!=aux->infoK && aux->sig!=nullptr){
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
    //delete aux;
}

template <typename K, typename T>
void ListaListaH<K,T>::InsertarZP2(NodoKT<K,T> *aux, NodoKT<K,T> *aux2, T info)
{
    if(aux->ant==nullptr){//[b]->
        aux2= new struct NodoKT<K,T>();
        aux2->infoT=info;
        aux->ant=aux2;
    }else{//[b]->{ant}[b1]->{ant}[b2]
        aux2 = new struct NodoKT<K,T>();
        aux2->infoT = info;
        aux2->ant=aux->ant;
        aux->ant=aux2;
    }
    //delete aux,aux2;
}
