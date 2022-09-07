#ifndef READJSON_H
#define READJSON_H
#include <iostream>
//
#include "UserArticuloCola.hpp"
//LISTA
#include "ListaDobleCir.hpp"
#include "ListaLista.hpp"
#include "simple.hpp"
//CLASE
#include "usuario.hpp"
#include "articulo.hpp"
#include "movimiento.hpp"
// 256->mine
#include "shaDCS.hpp"
    using namespace std; // NO DE ERROR string leer(string url)
// template <typename U,typename D,typename T>
struct jsonReadH{
    jsonReadH();
    UserArtCol<
        ListaDobleCirH<usuarioH>,
        ListaListaH<string, articuloH>,
        SimpleH<movimientoH>> leer(string url);//DEVUELVE TODO ESO
               
};
#endif