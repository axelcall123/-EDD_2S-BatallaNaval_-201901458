#include <iostream>
#include "../lib/crow_all.h"
int main(int argc, char *argv[])
{
	std::cout << "Hello world!" << std::endl;
	crow::SimpleApp app;
	CROW_ROUTE(app, "/")
		([]
			{
				crow::json::wvalue x({ {"status", "OK!"},{"otro",12} });
				return x; });
	CROW_ROUTE(app, "/get_usuario")
		.methods("GET"_method)([](const crow::request& req)
			{
				crow::json::wvalue x({ {"saludo", "OK!"},{"nose",0} });
				return x;
			});

	app.port(2500).run();
	//app.port(2500).multithreaded.run();
	return 0;

	
}