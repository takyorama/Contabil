#ifndef SERVICO_H
#define SERVICO_H

#include <iostream>
#include <vector>

#include "Transacao.h"

namespace Contabil{
	namespace Component{
		class Servico : public Contabil::Component::Transacao{
			public:
				Servico(int, std::string, float);
				~Servico();
				
				/**********  GETTERS & SETTERS  **********/
				void setDescript(std::string);
				void setPrice(float);
				
				std::string getDescript();
				float getPrice();
				
				/**********  EVENTOS  **********/
				std::string All();
				std::string Select(std::string);
				std::string findName(std::string);
				bool Include(std::vector<std::string>);
				bool Update(int, Contabil::Component::Servico &);
				bool cancel(int);
			private:
				std::string descricao;
				float preco;
		};
	}
}

#endif
