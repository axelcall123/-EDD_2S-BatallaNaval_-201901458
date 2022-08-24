#include <iostream>
#include "hpp/login.hpp"
using namespace std;
//FIXME:CREO QUE NO NECESITO LISTADOBLECIR
void loginH::principal(ListaDobleCirH<usuarioH> *usuario, Nodo<usuarioH> *logg,SimpleH<movimientoH> *tutos) // LOGG SIRVE PARA YA NO BUSCAR DE NUEVO[TIENE LA DIRECCION ESTABLECIDA]
{
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
                cout << "ingrese nuevo nick:ed" << endl;
                string nuevoNick;
                cin >> nuevoNick;
                cout << endl;

                cout << "ingrese password:ed" << endl;
                string password;
                cin >> password;
                cout << endl;

                cout << "ingrese edad:ed" << endl;
                string edad;
                cin >> edad;
                cout << endl;
                usuario->modificar(logg,nuevoNick, password, edad);
                //editarInfo(usuario);
                break;
            }

            case 2:
            {
                cout << "CASO 2:ELMINAR" << endl;
                cout << "quiere elminar la cuenta? si: no" << endl;
                string eliminar;
                cin >> eliminar;
                cout << endl;
                if(eliminar=="si"){
                    usuario->eliminar(logg, NULL);
                }else{
                    break;
                }
                opcion = true;
                break;
            }
            case 3:
            {
                cout << "CASO 3:TUTORIAL" << endl;
                SimpleH<movimientoH> *auxTuto = new SimpleH<movimientoH>;
                string movimientos="";
                int contador = 0;
                while (tutos->vacia() != true) // MINETRAS NO ESTE VACIO NO SAQUE
                {

                    movimientoH oBstring = tutos->Sacar(); // SACAR
                    auxTuto->InsertarAlFinal(NULL,oBstring);//VOLVER A METER
                    
                    
                    if(contador==0){//VER PRIMERA PARTE
                        cout << "TABLERO:" << endl;
                        cout << "   ANCHO:" << oBstring.re_x() << endl;
                        cout << "   ALTO:" << oBstring.re_y() << endl;
                        contador+=1;
                    }else{
                        movimientos = movimientos+ "(" + oBstring.re_x() + "," + oBstring.re_y() + ")->";
                    }
                    
                };
                cout << "MOVIMIENTOS:" << endl;
                cout << movimientos << endl;
                tutos=auxTuto;//VOLVER AL INICIAL
                delete auxTuto;//ELIMINAR EL QUE NO HACE FALTA
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
void loginH::verArticulos(){

};