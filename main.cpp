#include <iostream>
using namespace std;
#include "readJson.cpp"

//TEST

// delete[] objeto;
int main()
{
    bool salida = false;

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
                    cout << "ingrese la url" << endl;
                    // URL->D://HOLA//SI
                    string url;
                    cin >> url;
                    cout << endl;
                    jsonReadH leida;
                    leida.leer(url);
                    
                    break;
                }

                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
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
    }while(!salida);
};