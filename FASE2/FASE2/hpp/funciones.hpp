#ifndef READJSON_H
#define READJSON_H
#include <iostream>
//LISTA
#include "listas.hpp"
//CLASE
#include "clases.hpp"
//256->mine
#include "funciones.hpp"
using namespace std; // NO DE ERROR string leer(string url)
// template <typename U,typename D,typename T>
struct jsonReadH {
    jsonReadH();
    UserArtCol<
        ListaDobleCirH<usuarioH>,
        ListaListaH<string, articuloH>,
        SimpleH<movimientoH>> leer(string url);//DEVUELVE TODO ESO 

};
#endif

#ifndef SHADCS_H
#define SHADCS_H
#include <iostream>
// 256
using namespace std;
struct shadcsH
{
    string codificado(string pass);
};
#endif

#ifndef USARCO_H
#define USARCO_H
template <typename U, typename D, typename T>//AYUDA PARA DEVOLVER ESOS DATOS
struct UserArtCol
{
    UserArtCol();//constructor
    U a;
    D b;
    T c;
};
#endif