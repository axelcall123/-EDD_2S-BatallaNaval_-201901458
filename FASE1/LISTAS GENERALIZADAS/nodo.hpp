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
    int tam;
    Nodo *sig;//SIG{simple} SIG{ListaLista}
    Nodo *ant;//ANT{dobleC} Z{ListaLista}
};
#endif