#include <iostream>
#include "hpp/usuario.hpp"
using namespace std;
void usuario::ob(string nick, string password, string moneda)
{
    this->nick = nick;
    this->password = password;
    this->moneda = moneda;
};
string usuario::re_nick() { return nick; };
string usuario::re_password() { return password; };
string usuario::re_moneda() { return moneda; };