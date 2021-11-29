#include <iostream>

namespace Contabil{
	namespace templates{
		void listaServicos(std::string descript, std::string date, std::string address){
			std::cout << "Servico: " << std::endl;
			std::cout << std::endl << descript;
			std::cout << " " << address;
			std::cout << " " << date << std::endl;
		}
	}
}