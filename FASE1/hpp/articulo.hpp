#ifndef ARTICULO_H
#define ARTICULO_H
#include <iostream>
using namespace std;
class articuloH
{
private:
    string id;
    string precio;
    string nombre;
    string src;

public:
    //id
    void ob(string id, string precio, string nombre, string src);
    string re_id();
    //precio
    string re_precio();
    //nombre
    string re_nombre();
    // src
    string re_src();
};
#endif