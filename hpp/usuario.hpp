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