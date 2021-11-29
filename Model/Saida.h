#ifndef SAIDA_H
#define SAIDA_H

#include <iostream>

#include "Cliente.h"
#include "../resources/Component/Transacao.h"

namespace Contabil{
	namespace Model{
		class Saida : public Contabil::Model::Transacao{
			public:
				/**********  GETTERS & SETTERS  **********/
				void set();
				
				std::string get();
			protected:
				Contabil::Model::Pessoa pessoa;
		};
	}
}
#endif