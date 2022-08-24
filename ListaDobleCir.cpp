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
void ListaDobleCirH<T>::modificar(Nodo<T> *aux,string nuevoNick,string edad, string password){
    shadcsH change;
    aux->info.ob_nick(nuevoNick);
    aux->info.ob_password(change.codificado(password));
    aux->info.ob_edad(edad);
};
template <typename T>
Nodo<T> *ListaDobleCirH<T>::buscarU(Nodo<T> *aux, string nombre)//BUSCAR SOLO POR NICK
{
    aux = new struct Nodo<T>();
    aux=lc;
    int tamSig=0;
    while (tam >= tamSig && nombre != aux->info.re_nick())//BUSCAR POR NICK
    {
        aux = aux->sig;
        tamSig += 1;
    }
    if (tam <= tamSig)
    { // SI NO EXISTE
        aux=NULL;
    }
    return aux;
};
template <typename T>
Nodo<T> *ListaDobleCirH<T>::buscarD(Nodo<T> *aux, string nombre, string pass)//BUSCA POR NICK Y PASSWORD
{
    //FIXME:PUEDE PONERSE ESTE MISMO CODIGO EN OTRa FUNCION DIFRENTE DESDE aux=;; while
    aux = new struct Nodo<T>();
    aux = lc;
    int tamSig = 0;
    while (tam >= tamSig && nombre != aux->info.re_nick())//BUSCAR POR NICK
    {
        aux = aux->sig;
        tamSig += 1;
    }
    //VERIFICAR SI EL PASSWORD ES IGUAL
    shadcsH ver;
    string verificar=ver.codificado(pass);//CONVIERTE EN 256 PARA VERIFICAR

    if (tam <= tamSig | aux->info.re_password()!=verificar)//SI ALGUNO DE LOS 2 NO CUMPLE NO DEJA
    { // SI NO EXISTE
        aux = NULL;
    }
    return aux;
};
template <typename T>
void ListaDobleCirH<T>::eliminar(Nodo<T> *aux,Nodo<T> *aux2){
    cout<<aux<<endl;
    aux2 = aux->ant;
    if (tam == 1)
    {
        delete aux;
        lc = nullptr;
        tam -= 1;
    }else if (aux == lc)
    {
        lc=aux->sig;
        aux2->sig = lc;
        delete aux;
        aux2->sig->ant = aux2;
        tam -= 1;
    }
    else{
        aux2->sig = aux->sig; 
        delete aux;
        aux2->sig->ant = aux2;
        tam -= 1;
    }
};