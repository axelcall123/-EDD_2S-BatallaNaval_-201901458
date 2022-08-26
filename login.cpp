#include <iostream>
#include "hpp/login.hpp"
using namespace std;
void loginH::principal(ListaDobleCirH<usuarioH> usuario, 
    Nodo<usuarioH> *logg, 
    SimpleH<movimientoH> tutos, 
    ListaListaH<string, articuloH> articulo) // LOGG SIRVE PARA YA NO BUSCAR DE NUEVO[TIENE LA DIRECCION ESTABLECIDA]
{
    bool salida = false;
    SimpleH<SimpleH<movimientoH>> pila;
    do
    {
        cout << "---EN LOGIN---" << endl;
        cout << "ELIGA LA OPCION" << endl;
        cout << "1. EDITAR INFORMACION" << endl;//#1
        cout << "2. ELIMINAR CUENTA" << endl; //#2
        cout << "3. VER EL TUTORIAL" << endl;//#4
        cout << "4. VER ARTICULOS DE LA TIENDA" << endl;//#3
        cout << "5. REALIZAR MOVIMIENTOS" << endl;//#5
        cout << "6. SALIR" << endl; //#5
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
                usuario.modificar(logg,nuevoNick, password, edad);
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
                    usuario.eliminar(logg, NULL);
                }else{
                    break;
                }
                salida = true;
                break;
            }
            case 3:
            {
                cout << "CASO 3:TUTORIAL" << endl;
                SimpleH<movimientoH> auxTuto;
                string movimientos="";
                int contador = 0;
                while (tutos.vacia() != true) // MINETRAS NO ESTE VACIO NO SAQUE
                {

                    movimientoH oBstring = tutos.Sacar(); // SACAR
                    auxTuto.InsertarAlFinal(NULL,oBstring);//VOLVER A METER
                    
                    
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
                //delete auxTuto;//ELIMINAR EL QUE NO HACE FALTA
                break;
            }

            case 4:
            {
                cout << "CASO 4:ARTICULOS" << endl;
                cout<<"Total Tokens:: "<<logg->info.re_moneda()<<endl;
                articulo.recorrerAll(NULL,NULL);
                break;
            }
            case 5:
            {
                cout << "CASO 5:MOVIMIENTOS" << endl;
                cout << "Ingrese x,y a la hora que se le solicite" << endl;
                cout << "para salir escriba back:no save" << endl;
                cout << "para guardar y salir escriva save" << endl;
                string x="x";
                string y="y";
                cout<<endl;
                SimpleH<movimientoH> realizarMovs;
                movimientoH claseMov;
                while(x!="back" | y!="back"){
                    //CORDENAS
                    //x
                    cout << "Ingrese x|back|save" << endl;                   
                    cin >> x;
                    cout << endl;
                    if(x=="back"){break;}//SALIR
                    else if(x=="save"){
                        string nombre;
                        cout << "Ingrese el nombre salvado" << endl;
                        cin >> nombre;
                        cout << endl;
                        // INSETAR INICIO PILA
                        pila.InsertarAlInicio(NULL,realizarMovs);
                        break;
                    }
                    //y
                    cout << "Ingrese y|back|save" << endl;
                    cin >> y;
                    cout << endl;
                    if (y == "back"){ break;}// PARA SALIR              
                    else if (x == "save")
                    {
                        string nombre;
                        cout << "Ingrese el nombre salvado" << endl;
                        cin >> nombre;
                        cout << endl;
                        //INSETAR INICIO PILA
                        pila.InsertarAlInicio(NULL, realizarMovs);
                        break;
                    }
                    //GUARDAR MOVS x,y EN UNA COLA
                    claseMov.ob(x, y);
                    realizarMovs.InsertarAlFinal(NULL, claseMov);
                       
                }
                //FIXME:IF DIF x="X",y="Y" SI HIZO PARTIDA
                // GANAR PUNTOS POR MOVIMIENTO
                //  STR->INT
                int punto = stoi(logg->info.re_moneda()) + 1;
                // INT->STR
                stringstream id1;
                id1 << punto;
                logg->info.ob_moneda(id1.str());
                break;
            }
            case 6:
                salida = true;
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