#ifndef login_H
#define login_H
#include <iostream>
//CLASE
#include "movimiento.hpp"
#include "usuario.hpp"
//LISTA
#include "ListaDobleCir.hpp"
#include "simple.hpp"

using namespace std;
struct loginH
{
    void principal(ListaDobleCirH<usuarioH> *user, Nodo<usuarioH> *logueado, SimpleH<movimientoH> *tutos);
    // LOGG SIRVE PARA YA NO BUSCAR DE NUEVO[TIENE LA DIRECCION ESTABLECIDA]
};
#endif