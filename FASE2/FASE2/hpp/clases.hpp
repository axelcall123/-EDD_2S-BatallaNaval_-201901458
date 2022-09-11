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

#ifndef SIMPLE_H
#define SIMPLE_H
#include "nodos.hpp"
using namespace std;
template <class T>
struct SimpleH
{
private:
    Nodo<T>* primero;
    Nodo<T>* final;
    int tam;
public:
    SimpleH(); // constructor
    // metodos{func}
    void InsertarAlInicio(Nodo<T>* nodoN, T dato); // PUSH,PILA
    void InsertarAlFinal(Nodo<T>* nodoN, T dato);  // INSERTAR,COLA
    T Sacar();
    string graficarTXT(Nodo<T>* nodoAux);                          // POP, ELIMINAR
    bool vacia();                                  //SI ESTA VACIO
};
#endif

#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
using namespace std;
struct usuarioH {
private:
    string nick;
    string password;
    string moneda;
    string edad;
public:
    usuarioH();
    void ob(string nick, string password, string moneda, string edad);
    void ob_nick(string nick);
    void ob_password(string password);
    void ob_moneda(string moneda);
    void ob_edad(string edad);

    string re_nick();
    string re_password();
    string re_moneda();
    string re_edad();
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

#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H
#include <iostream>
using namespace std;
class movimientoH
{
private:
    string x;
    string y;
    //string nombre;
public:
    movimientoH();
    void ob(string x, string y/*,string nombre*/);
    string re_x();
    string re_y();
    //string re_nombre();
};
#endif