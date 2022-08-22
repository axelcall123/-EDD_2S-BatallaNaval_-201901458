#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
using namespace std;
struct usuarioH{    
    private:
        string nick;
        string password;
        string moneda;
        string edad;
    public:
        usuarioH();
        void ob(string nick,string password, string moneda,string edad);
        string re_nick();
        string re_password();
        string re_moneda();
        string re_edad();
};
#endif