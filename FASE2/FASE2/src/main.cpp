#include <iostream>
using namespace std;
//CROW
#include "../lib/crow_all.h"
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


using namespace std;
int main(int argc, char *argv[])
{
	ListaDobleCirH<usuarioH> usuario;
	ListaListaH<string, articuloH> articulo;
	SimpleH <movimientoH> tuto;

	std::cout << "Hello world!" << std::endl;
	crow::SimpleApp app;
	CROW_ROUTE(app, "/")
		([]
			{
				crow::json::wvalue x({ {"status", "OK!"},{"otro",12} });
				return x; });
	//TEST
	CROW_ROUTE(app, "/Tget")
		.methods("GET"_method)([/*&ls*/](const crow::request& req)
			{
				crow::json::wvalue x({ {"saludo", "desde c++!"},{"error",0} });
				return x;
			});
	CROW_ROUTE(app, "/Tpost")
		.methods("POST"_method)([/*&ls*/](const crow::request& req)
			{
				auto x = crow::json::load(req.body);
				if (!x)
					return crow::response(400);
				string carga = x["post"].s();
				cout << "post:c++ " << carga << endl;
				return crow::response(201); });
	CROW_ROUTE(app, "/Tput")
		.methods("PUT"_method)([/*&ls*/](const crow::request& req)
			{
				auto x = crow::json::load(req.body);
				if (!x)
					return crow::response(400);
				string carga = x["put"].s();
				cout << "put:c++ " << carga << endl;
				return crow::response(202); });
	CROW_ROUTE(app, "/Tdelete")
		.methods("DELETE"_method)([/*&ls*/](const crow::request& req)
			{
				auto x = crow::json::load(req.body);
				if (!x)
					return crow::response(400);
				string carga = x["delete"].s();
				cout << "delete:c++  " << carga << endl;
				//TODO: El metodo de eliminacion no es el correcto y deben implementarse las validaciones correspondientes
				return crow::response(203); });
	//APP NORMAL
	CROW_ROUTE(app, "/PostCargaMasiva")
		.methods("POST"_method)([&usuario,&articulo,&tuto](const crow::request& req)
			{
				auto x = crow::json::load(req.body);
				if (!x)
					return crow::response(400);
				string url = x["jsonCarga"].s();
				UserArtCol<ListaDobleCirH<usuarioH>, 
							ListaListaH<string, 
							articuloH>, 
							SimpleH<movimientoH>>retorno;
				jsonReadH leida;
				retorno = leida.leer(url);
				usuario = retorno.a;
				articulo = retorno.b;
				tuto = retorno.c;
				//cout << "pcm:c++ " << url << endl;
				return crow::response(200); });
	//app.port(5000).multithreaded().run();
	app.port(2500).run();
	//app.port(2500).multithreaded.run();
	//return 0;
}