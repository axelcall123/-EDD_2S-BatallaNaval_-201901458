#include <iostream>
#include "hpp/login.hpp"

using namespace std;
void loginH::principal(ListaDobleCirH<usuarioH> *usuario){
    bool salida = false;
    do
    {
        cout << "---EN LOGIN---" << endl;
        cout << "ELIGA LA OPCION" << endl;
        cout << "1. EDITAR INFORMACION" << endl;//#1
        cout << "2. ELIMINAR CUENTA" << endl; //#2
        cout << "3. VER EL TUTORIAL" << endl;//#4
        cout << "4. VER ARTICULOS DE LA TIENDA" << endl;//#3
        cout << "5. REALIZAR MOVIMIENTOS" << endl;//#5
        cout << "5. SALIR" << endl; //#5
        try
        {
            int opcion;
            cin >> opcion;
            cout << endl;
            switch (opcion)
            {
            case 1:
            {
                cout << "CASO 1:EDITAR" << endl;
                cout << "ingrese nick:ed" << endl;
                string nick;
                cin >> nick;
                cout << endl;

                cout << "ingrese password:ed" << endl;
                string password;
                cin >> password;
                cout << endl;

                cout << "ingrese edad:ed" << endl;
                string edad;
                cin >> edad;
                cout << endl;
                usuario->modificar(NULL,nick,password,edad);
                //editarInfo(usuario);
                break;
            }

            case 2:
            {
                
                break;
            }
            case 3:
            {
                break;
            }

            case 4:
            {
                break;
            }
            case 6:
            {
                break;
            }
            case 5:
                opcion = true;
                break;
            case 99:
            {
                break;
            }
            default:
                cout << "inserte un numero por favor";
                break;
            }
        }
        catch (logic_error)
        {
            cout << "ups!!" << endl;
        }
    } while (!salida);
};
/*void loginH::editarInfo(ListaDobleCirH<usuarioH> *user){
    
};*/
void loginH::elminarInfo(){

};
void loginH::verTuto(){

};
void loginH::verArticulos(){

};