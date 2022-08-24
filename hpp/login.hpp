#ifndef login_H
#define login_H
#include <iostream>
#include "hpp/ListaDobleCir.hpp"
#include "hpp/usuario.hpp"
using namespace std;
struct loginH
{
    void principal(ListaDobleCirH<usuarioH> *user);
    void editarInfo(ListaDobleCirH<usuarioH> *user);
    void elminarInfo();
    void verTuto();
    void verArticulos();
};
#endif