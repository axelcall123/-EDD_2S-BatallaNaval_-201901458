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
    nuevo->infoK=info;//STRING infoK
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
     ↓
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
        aux2->infoT=info;//infoT articuloH
        aux->ant=aux2;
    }else{//[b]->{ant}[b1]->{ant}[b2]
        aux2 = new struct NodoKT<K,T>();
        aux2->infoT = info;
        aux2->ant=aux->ant;
        aux->ant=aux2;
    }
    //delete aux,aux2;
}

template <typename K, typename T>
void ListaListaH<K, T>::recorrerAll(NodoKT<K, T> *aux){//NULL
    aux = new NodoKT<K, T>;
    while(aux->sig!=nullptr){
        if(aux->ant!=nullptr){
            if(aux->ant->ant!=nullptr){//EXISTE [A]->[B]->[...]
                ordenarMM(aux->ant, aux->ant->ant, aux->ant);
            }else{//EXISTE [A]->
                //DEVULVO NADAS
            }
        }
        aux=aux->sig;
    }
};
template <typename K, typename T>
void ListaListaH<K, T>::ordenarMM( //[a]{aux}->[b]{aux2}->[c]
    NodoKT<K, T> *aux,  // [a]
    NodoKT<K, T> *aux2, //[b]
    NodoKT<K, T> *Reg   // REGRESAR INICIO [a]
)
{
    int cont=0;
    //CICLO SE REPITE n^2 veces
    while(aux->ant!=nullptr && cont!=tam*tam){//[a]->
        while (aux2->ant != nullptr)
        { //[a]->
            if (stoi(aux->infoT.re_precio()) > stoi(aux2->infoT.re_precio()))
            { //[a]<[b]  PRECIO infoT<articuloH>

            }

        }
        cont+=1;

    }
};

template <typename K, typename T>
string ListaListaH<K, T>::graficar(NodoKT<K, T> *aux,NodoKT<K, T> *aux2){
    aux=new NodoKT<K, T>;
    aux2=new NodoKT<K, T>;
    aux=primero;
    SimpleH<string> diagrama;
    string dotP="";//P_1
    string dotPS="";P_1->P_2
    string dotN="";//N_1_1     
    string dotNS="";//N_1_1->N_1_2
    string rank = "{rank=same"; //{rank=same;N_1_1-;N_1_2}                                       // A2->A1
    int id = 0;
    //CICLO
    //INT
    stringstream ss;
    stringstream aa;
    int i=0;
    int ii=0;
    while(aux->sig!=nullptr){
        aux2=aux->ant;
        ss << i;
        dotP+="P_"+ss.str()+
            "[label=\""+
                aux->infoK
            +"\"]\n";
        
        dotpS+="N_"+ss.str()+"->";
        while(aux2->ant!=nullptr){
            aa << ii;
            dotN += "N_" + ss.str() + "_" + aa.str() +
                    "[label=\"" +
                        aux2->infoT.re_nombre()
                    +"\"]\n";
        rank+=;
        dotNS+="N_" + ss.str() + "_" + aa.str()+"->";
            ii+=1;
        }
        aux->sig;
        i+=1;
    }
    return dotF;
};
/*subgraph cluster0 {
    AA->BB->CC->DD->EE->FF;
  }
  subgraph cluster1 {
    {rank=same;A1;A2;A3}
    AA->A1->A2->A3;
  }
  subgraph cluster2 {
    {rank=same;B1;B2;B3}
    BB->B1->B2->B3;
  }
  subgraph cluster3 {
    {rank=same}
    CC;
  }*/