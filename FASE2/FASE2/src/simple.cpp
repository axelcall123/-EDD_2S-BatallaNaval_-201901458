#include "../hpp/listas.hpp" //llama al archivo
#include <iostream>
// Nombreclass:NombreConstructor
template <typename T>
SimpleH<T>::SimpleH()
{
    tam=0;
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
    tam+=1;
    //delete nuevo;
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
    tam += 1;
    //delete nuevo;
}

template <typename T>
T SimpleH<T>::Sacar()
{
    //[a:p]->[b]->[c:f]
    //[a]  [b:p]->[c:f]
    T dato;
    dato = primero->info; // OBTENGO LA INFO
    if (tam!=1){
        primero->sig->ant = primero;
        primero = primero->sig;
        
        delete primero->ant;
    }else{
        primero=nullptr;
    }
    tam-=1;
    return dato;
}
template <typename T>
bool SimpleH<T>::vacia(){
    bool vacia=false;
    if(primero==nullptr){
        vacia=true;
    }
    return vacia;
};

template <typename T>
string SimpleH<T>::graficarTXT(Nodo<T> *aux)
{
    /*string dotI = "subgraph usuario {\nrankdir=LR;\n"; // INICO
    string dotM="";//MEDIO
    string dotF = "}";//FINAL
    string dotAt="";// A1[label="info1"]
    string dotConSig="";//A1->A2
    aux=new Nodo<T>;
    while(aux->sig!=nullptr){

        aux=aux->sig;
    }*/
    return "";
};