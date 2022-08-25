//SI EL MAIN YA TRAE INCLUDES SUS OTRAS FUCIONES NO SE UTILIZAN
#include <iostream>
using namespace std;
//LER JSON
#include "readJson.cpp"
// CLASES
#include "usuario.cpp"
#include "articulo.cpp"
// LISTAS
#include "ListaDobleCir.cpp"
#include "ListaLista.cpp"
#include "simple.cpp"
#include "movimiento.cpp"
// RETURN
#include "UserArticuloCola.cpp"
// 256->mine
#include "shaDCS.cpp"
//FUNCIONALIDADES
#include "login.cpp"
// TEST
//NOTAS
/*SE DEVE PONER LAS FUNCIONES A UTILZAR EN .HPP;
SI SE UTILZA UNA FUNCION .CPP Y LA MISMA ENTRO .CPP QUE YA ESTE EL MAIN ERROR*/
// delete[] objeto;
int main()
{
    bool salida = false;
ListaDobleCirH<usuarioH> *usuario;
ListaListaH<string, articuloH> *articulo;
SimpleH <movimientoH> *tuto;


    do
    {
        cout << "ELIGA LA OPCION" << endl;
        cout << "1. CARGA MASIVA" << endl;        //#1
        cout << "2. REGISTRO DE USUARIO" << endl; //#2
        cout << "3. LOGIN" << endl;               //#3
        cout << "4. REPORTES" << endl;            //#3
        cout << "5. SALIR" << endl;               //#3
        try
        {
            int opcion;
            cin >> opcion;
            cout << endl;

            switch (opcion)
                {
                case 1:
                { // PARA NO ERROR{}
                    // RETORNA UN JSON
                    cout << "CASO 1:JSON" << endl;
                    cout << "ingrese la url" << endl;
                    // URL->D://HOLA//SI
                    string url;
                    cin >> url;
                    cout << endl;
                    jsonReadH leida;
                    //leida.xk();
                    url = "D:/AXEL/DOCUMENTOS/U--OTROS/GITHUB/EDD-2022-2B/-EDD_2S-BatallaNaval_-201901458/json/j.json"; // FIXME:ELIMINAR DESPUES
                    UserArtCol<ListaDobleCirH<usuarioH>, ListaListaH<string, articuloH>, SimpleH<movimientoH>>
                    retorno;

                    retorno=leida.leer(url);
                    usuario = new ListaDobleCirH<usuarioH>;
                    articulo= new ListaListaH<string, articuloH>;
                    tuto= new SimpleH<movimientoH>;
                    usuario = &retorno.a;
                    articulo=&retorno.b;
                    tuto=&retorno.c;
                    break;
                }

                case 2:{
                    cout << "CASO 2:REGISTRO" << endl;
                    cout << "ingrese nick" << endl;
                    string nick;
                    cin >> nick;
                    cout << endl;

                    cout << "ingrese password" << endl;
                    string password;
                    cin >> password;
                    cout << endl;

                    cout << "ingrese edad" << endl;
                    string edad;
                    cin >> edad;
                    cout << endl;
                    usuarioH nuevoUser; // OBTNER OBJETO
                    shadcsH pass;
                    //FIXME:FALTA VERIFICAR SI EXISTE NOMBRE
                    nuevoUser.ob(nick,pass.codificado(password) , "0", edad); // NUEVO USUARIO
                    usuario->Insertar(NULL,nuevoUser);
                    break;
                }
                case 3:{
                    cout << "CASO 2:LOGIN" << endl;
                    cout << "ingrese nombre y password" << endl;

                    cout << "ingrese nick" << endl;
                    string nick;
                    cin >> nick;
                    cout << endl;

                    cout << "ingrese password" << endl;
                    string password;
                    cin >> password;
                    cout << endl;
                    //FIXME:ELMINAR ESTO DEPUES
                    nick="aux";
                    password="aux";
                    Nodo<usuarioH> *aux=usuario->buscarD(NULL, nick, password);
                    if(aux!=NULL){//PASS Y NOMBRE SON IGUALES
                        loginH logs;
                        cout << "loggueando" << endl;
                        logs.principal(usuario,aux,tuto);
                    }else{
                        cout << "no ingreso bien algun dato" << endl;
                    }
                    break;
                }
                case 4:{
                    
                    break;
                    }
                case 5:
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
    }while(!salida);
};