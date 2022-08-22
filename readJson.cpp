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
//LISTAS
#include "ListaDobleCir.cpp"
jsonReadH::jsonReadH()
{

}
// delete[] algo;
string jsonReadH::leer(string url){
    //  D://AXEL//DOCUMENTOS//UNIVERSIDAD--ESTUDIOS//2022-2B-4A//#EDDL 2DA//CLASE//txt.txt
    ifstream MyReadFile(url);
    //OBTENGO LINE POR LINEA EL TEXTO
    string myText, txtjson;
    while (getline(MyReadFile, myText))
    {
        //linea ha linea
        txtjson=txtjson+myText;
    }
    
    json j_complete = json::parse(txtjson);//PARSEO JSON
    ListaDobleCirH<usuarioH> usuarioLista;//TIPO USUARIO
    usuarioH usuarioClass;
    
    // FOR EACH PARA OBTENER LOS "TXT"
    for (auto var : j_complete.at("usuarios"))
    {
            //var.at("nick|password|monedas|edad")
            usuarioClass.ob(
                var.at("nick"),
                var.at("password"),
                var.at("monedas"),
                var.at("edad"));
            usuarioLista.Insertar(NULL, usuarioClass);
    }
    return "holis";
};