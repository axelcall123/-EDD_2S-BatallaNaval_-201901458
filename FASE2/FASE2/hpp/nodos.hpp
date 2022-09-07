// PARA REUTILZAR EN OTROS LUGARES
// https://www.delftstack.com/howto/cpp/template-inheritance-in-cpp/
#ifndef NODO_H
#define NODO_H
template <typename T>
// struct|class
struct Nodo
{
    //public: //por ser struct
    T info;
    Nodo* sig;//SIG{simple} SIG{ListaLista}
    Nodo* ant;//ANT{dobleC} Z{ListaLista}
};
#endif

#ifndef NODOKT_H
#define NODOKT_H
template <typename K, typename T>
// struct|class
struct NodoKT
{
    //public: //por ser struct
    T infoT;
    K infoK;
    int tam;
    NodoKT* sig;//SIG{simple} SIG{ListaLista}
    NodoKT* ant;//ANT{dobleC} Z{ListaLista}
};
#endif
