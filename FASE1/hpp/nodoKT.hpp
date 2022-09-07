// PARA REUTILZAR EN OTROS LUGARES
// https://www.delftstack.com/howto/cpp/template-inheritance-in-cpp/
#ifndef NODOKT_H
#define NODOKT_H
template <typename K,typename T>
// struct|class
struct NodoKT
{
    //public: //por ser struct
    T infoT;
    K infoK;
    int tam;
    NodoKT *sig;//SIG{simple} SIG{ListaLista}
    NodoKT *ant;//ANT{dobleC} Z{ListaLista}
};
#endif