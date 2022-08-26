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