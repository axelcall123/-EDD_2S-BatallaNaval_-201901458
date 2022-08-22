#include "hpp/readJson.hpp"
#include <iostream>
// json
#include "extras/json.hpp"
#include <iomanip>
//leer archivo
#include <fstream>
using json = nlohmann::json;
//CLASES
#include "usuario.cpp"
#include "articulo.cpp"
//LISTAS
#include "ListaDobleCir.cpp"
// 256
#include "extras/SHA256.cpp"
jsonReadH::jsonReadH()
{

}
// delete[] algo;
string jsonReadH::leer(string url){
    //  D://AXEL//DOCUMENTOS//UNIVERSIDAD--ESTUDIOS//2022-2B-4A//#EDDL 2DA//CLASE//txt.txt
    ifstream MyReadFile(url);

    string myText, txtjson; // OBTENGO LINE POR LINEA EL TEXTO
    while (getline(MyReadFile, myText))
    {
        //linea ha linea
        txtjson=txtjson+myText;
    }

    json j_complete = json::parse(txtjson);//PARSEO JSON
    ListaDobleCirH<usuarioH> usuarioLista;//TIPO USUARIO
    usuarioH usuarioClass;

    for (auto var : j_complete.at("usuarios")) // FOR EACH PARA OBTENER LOS "TXT"
    {
            //var.at("nick|password|monedas|edad")
            //256
            SHA256 sha;
            sha.update(var.at("password"));//CONVIRTE 256->RETURN{VAR}
            uint8_t *digest = sha.digest();

            usuarioClass.ob( // CLASE USUARIO
                var.at("nick"),
                SHA256::toString(digest),
                var.at("monedas"),
                var.at("edad"));
            delete[] digest;//ELIMNAR
            usuarioLista.Insertar(NULL, usuarioClass); // INSERTAR LISTAS
    }
    articuloH articuloClass;
    for (auto var : j_complete.at("articulos")) // FOR EACH PARA OBTENER LOS "TXT"
    {
        // var.at("id|categorias|precio|nombre|src")

        articuloClass.ob( // CLASE CATEGORIA
            var.at("id"),
            var.at("categorias"),
            var.at("precio"),
            var.at("nombre"),
            var.at("src"));
        /*
        usuarioLista.Insertar(NULL, usuarioClass); // INSERTAR LISTAS*/
    }

    return "holis";
};