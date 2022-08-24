#include "hpp/readJson.hpp"
// json
#include "extras/json.hpp"
#include <iomanip>
//LEER ARCHIVO
#include <fstream>
using json = nlohmann::json;
//YA LO INCLUYE NO SE NECESITA ESTA EN EL .HPP
//#INCLUDE
// 256->mine

jsonReadH/*<U,D,T>*/::jsonReadH()
{

}
// delete[] algo;
/*template <typename U, typename D, typename T>*/
UserArtCol<ListaDobleCirH<usuarioH>,
           ListaListaH<string, articuloH>,
           SimpleH<string>> jsonReadH /*<U,D,T>*/ ::leer(string url)
{
    //  D://AXEL//DOCUMENTOS//UNIVERSIDAD--ESTUDIOS//2022-2B-4A//#EDDL 2DA//CLASE//txt.txt
    ifstream MyReadFile(url);

    string myText, txtjson; // OBTENGO LINE POR LINEA EL TEXTO
    while (getline(MyReadFile, myText))
    {
        //linea ha linea
        txtjson=txtjson+myText;
    }

    json j_complete = json::parse(txtjson);//PARSEO JSON
    // USUARIOS------
    ListaDobleCirH<usuarioH> usuarioLista;//TIPO USUARIO
    usuarioH usuarioClass;
    shadcsH pass;
    for (auto var : j_complete.at("usuarios")) // FOR EACH PARA OBTENER LOS "TXT"
    {
            //var.at("nick|password|monedas|edad")
            //256
            
            usuarioClass.ob( // CLASE USUARIO
                var.at("nick"),
                pass.codificado(var.at("password")),
                var.at("monedas"),
                var.at("edad"));
            usuarioLista.Insertar(NULL, usuarioClass); // INSERTAR LISTAS
    }
    // ARTICULOS------
    articuloH articuloClass;
    ListaListaH<string,articuloH> articuloLista;
    bool uno=true;
    for (auto var : j_complete.at("articulos")) // FOR EACH PARA OBTENER LOS "TXT"
    {
        // var.at("id|categorias|precio|nombre|src")
        articuloClass.ob( // CLASE ARTICULO
            var.at("id"),
            var.at("precio"),
            var.at("nombre"),
            var.at("src"));
        if(uno==true){
            articuloLista.InsertarAlInicio(NULL, var.at("categoria")); // EVITAR ERROR LISTA VACIA
            uno=false;
        }     
        articuloLista.InsertarZP1(NULL, var.at("categoria"), articuloClass); // INSERTAR LISTAS
    }
    // TUTORIAL------
    SimpleH<string> cola;
    string auxU = j_complete.at("tutorial").at("ancho") /*+ ";" +*/;
    string auxD=j_complete.at("tutorial").at("alto");
    string aux=auxU+";"+auxD;
    cola.InsertarAlFinal(NULL,aux);

    for(auto var:j_complete.at("tutorial").at("movimientos")){//FOR EACH PARA OBTENER LOS "TXT"
        auxU=var.at("x");
        auxD=var.at("y");
        aux = auxU + ";" + auxD;
        cola.InsertarAlFinal(NULL,aux);
    }
    //usuarioLista articuloLista cola
    UserArtCol < ListaDobleCirH<usuarioH>,
        ListaListaH<string, articuloH>,
        SimpleH < string >> retorno;
    
    retorno.a=usuarioLista;
    retorno.b=articuloLista;
    retorno.c=cola;
    return retorno;
};

/*UserArtCol<ListaDobleCirH<usuarioH>,
           ListaListaH<string, articuloH>,
           SimpleH<string>>
xk(){
    return 
};*/