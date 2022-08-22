#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
using namespace std;
class usuario{    
    private:
        string nick;
        string password;
        string moneda;
    public:
        void ob(string nick,string password, string monedas);
        string re_nick();
        string re_password();
        string re_moneda();
};
#endif