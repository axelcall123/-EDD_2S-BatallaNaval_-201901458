#include <iostream>
using namespace std;
#include "articulo.cpp"
int main(){
    articuloH t;
    t.ob("a","b","c","d","e");
    cout<<t.re_id()<<"#1"<<endl;
    t.ob("a0", "b0", "c0", "d0","e0");
    cout << t.re_id() << "#2" << endl; /**/
    return 0;
}