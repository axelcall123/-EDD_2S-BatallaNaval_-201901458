#ifndef login_H
#define login_H
#include <iostream>
//CLASE
#include "movimiento.hpp"
#include "usuario.hpp"
#include "articulo.hpp"
//LISTA
#include "ListaDobleCir.hpp"
#include "simple.hpp"
#include "ListaLista.hpp"
using namespace std;
struct loginH
{
    void principal(ListaDobleCirH<usuarioH> user, 
        Nodo<usuarioH> *logueado, 
        SimpleH<movimientoH> tutos, 
        ListaListaH<string, articuloH> articulos);
    // LOGG SIRVE PARA YA NO BUSCAR DE NUEVO[TIENE LA DIRECCION ESTABLECIDA]
};
#endif