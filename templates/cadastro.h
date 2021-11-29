#include <iostream>
#include <functional>

#include "../resources/Component/ServicoController.h"

namespace Contabil{
	namespace templates{
		Servico servico;
		ServicoController *controller;
		
		void cadastro(){
			std::string descricao, dta, endereco;
			float preco;
			int quantidade;
			
			std::cout << "Insira o nome do produto:" << std::endl;
			std::cin >> descricao;
			std::cout << "Quantidade: " << std::endl;
			std::cin >> quantidade;
			std::cout << "Endereco do servico: " << std::endl;
			std::cin >> endereco;
			std::cout << "Data do servico: " << std::endl;
			std::cin >> dta;
			std::cout << "Valor do servico: " << std::endl;
			std::cin >> preco;
			
			std::bind(servico.getDescript, descricao);
			std::bind(controller.Store, servico);
			/**
			std::bind(controller->Store['descricao'->descricao, 'quantidade'->quantidade, 'endereco'->]))
			
			controller->Store(servico);
			*/
		}
	}
}