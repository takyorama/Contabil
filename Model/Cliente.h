#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

#include "../resources/Model/Pessoa.h"

namespace Contabil{
	namespace Model{
		class Cliente : public Contabil::Model::Pessoa{
			public:
				/**********  GETTERS & SETTERS  **********/
				void set();
				
				void get();
				
				/**********  outras funcoes  **********/
				// saldo();
				// deposito();
				// retirada();
			protected:
		};
	}
}
#endif