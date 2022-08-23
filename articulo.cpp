#include <iostream>
#include "hpp/articulo.hpp"
using namespace std;
void articuloH::ob(string id, string precio, string nombre, string src){
    this->id=id;
    this->precio = precio;
    this->nombre = nombre;
    this->src = src;
};
string articuloH::re_id() { return this->id; };
string articuloH::re_precio() { return this->precio; };
string articuloH::re_nombre() { return this->nombre; };
string articuloH::re_src() { return this->src; };