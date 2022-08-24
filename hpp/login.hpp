#ifndef login_H
#define login_H
#include <iostream>
#include "ListaDobleCir.hpp"
#include "usuario.hpp"
#include "simple.hpp"
#include "movimiento.hpp"
using namespace std;
struct loginH
{
    void principal(ListaDobleCirH<usuarioH> *user, Nodo<usuarioH> *logueado, SimpleH<movimientoH> *tutos);
    // LOGG SIRVE PARA YA NO BUSCAR DE NUEVO[TIENE LA DIRECCION ESTABLECIDA]
    void editarInfo(ListaDobleCirH<usuarioH> *user);
    void verArticulos();
};
#endif