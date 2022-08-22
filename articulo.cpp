#include <iostream>
#include "hpp/articulo.hpp"
using namespace std;
void articuloH::ob(string id, string categoria, string precio, string nombre, string src){
    this->id=id;
    this->categoria = categoria;
    this->precio = precio;
    this->nombre = nombre;
    this->src = src;
};
string articuloH::re_id() { return id; };
string articuloH::re_categoria() { return categoria; };
string articuloH::re_precio() { return precio; };
string articuloH::re_nombre() { return nombre; };