#include "resources/Component/ServicosController.h"

using namespace Contabil;

int main(int argv, char **args){
	Servicos::ServicosController controller;

	controller.Delete(1);
	
	return EXIT_SUCCESS;
}