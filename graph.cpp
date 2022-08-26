#include <iostream>
#include "hpp/graph.hpp"
#include <fstream>
#include <iomanip>
// CREAR TXT
#include <fstream>
using namespace std;
void graphH::grafica(string texto)
{
    texto="digraph G {\n"+texto+"}";
    fstream outfile;
    string filename3 = "grafo1cc.txt";
    FILE *o_file = fopen(filename3.c_str(), "w+");
    if (o_file)
    { // envia ha MOVE "D:/AXEL/JUEGOS/64/cygwin64/bin/grafo1cc.txt" "D:/AXEL/DOCUMENTOS/UNIVERSIDAD--ESTUDIOS/2022-2B-4A/#EDDL 2DA/CLASE/TEST_NORMAL"
        fwrite(texto.c_str(), 1, texto.size(), o_file);
        cerr << "Done Writing!" << endl;
    }
    fclose(o_file); // CERRAR
    delete o_file;  // LIBERAR MEMORIA
    // IMPRIMIR GRAFO
    string dotPath = "D:\\AXEL\\JUEGOS\\64\\Graphviz\\bin\\dot.exe";
    string fileInputPath = "D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt";
    string fileOutputPath = "grafo1cc.svg";
    string tParam = "-Tsvg";
    string tOParam = "-O";
    string comadosCmd = dotPath + " " + tParam + " " + fileInputPath + " " + tOParam
        /*+ " " +fileOutputPath*/;
    int n = comadosCmd.length();
    char cmdU[n + 1];
    strcpy(cmdU, comadosCmd.c_str());
    system(cmdU);
    
    // MOVER SVG
    //  MOVE \"D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt.svg\" \"D:\\AXEL\\DOCUMENTOS\\UNIVERSIDAD--ESTUDIOS\\2022-2B-4A\\#EDDL_2DA\\CLASE\\TEST_NORMAL\"
    comadosCmd = "MOVE \"D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt.svg\" \"D:\\AXEL\\DOCUMENTOS\\U--OTROS\\GITHUB\\EDD-2022-2B\\-EDD_2S-BatallaNaval_-201901458\\GRAP\"";
    n = comadosCmd.length();
    cmdU[n + 1];
    strcpy(cmdU, comadosCmd.c_str());
    system(cmdU);
    // MOVER TXT
    /*//  MOVE \"D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt\" \"D:\\AXEL\\DOCUMENTOS\\UNIVERSIDAD--ESTUDIOS\\2022-2B-4A\\#EDDL_2DA\\CLASE\\TEST_NORMAL\"
    comadosCmd = "MOVE \"D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt\" \"D:\\AXEL\\DOCUMENTOS\\U--OTROS\\GITHUB\\EDD-2022-2B\\-EDD_2S-BatallaNaval_-201901458\\GRAP\"";
    n = comadosCmd.length();
    cmdU[n + 1];
    strcpy(cmdU, comadosCmd.c_str());
    system(cmdU);*/
}
//"MOVE \"D:\\AXEL\\JUEGOS\\64\\cygwin64\\bin\\grafo1cc.txt\" \"D:\\AXEL\\DOCUMENTOS\\U--OTROS\\GITHUB\\EDD-2022-2B\\-EDD_2S-BatallaNaval_-201901458\\GRAP\"";
