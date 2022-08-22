#include "hpp/usuario.hpp"
#include <iostream>
using namespace std;
// Nombreclass:NombreConstructor
usuarioH::usuarioH()
{
    this->nick = "";
    this->password = "";
    this->moneda = "0";
    this->edad = "18";
}
void usuarioH::ob(string nick, string password, string moneda, string edad)
{
    this->nick = nick;
    this->password = password;
    this->moneda = moneda;
    this->edad = edad;
};
string usuarioH::re_nick() { return this->nick; };
string usuarioH::re_password() { return this->password; };
string usuarioH::re_moneda() { return this->moneda; };
string usuarioH::re_edad() { return this->edad; };