#ifndef ENTRADA_H
#define ENTRADA_H

#include <iostream>

#include "../resources/Component/Transacao.h"
#include "Cliente.h"

namespace Contabil{
	namespace Model{
		class Entrada : public Contabil::Component::Transacao{
			public:
				Entrada();
    			~Entrada();
    		/**********  GETTERS & SETTERS  **********/
    			bool setPart(Contabil::Model::Cliente &);
    			bool addPart(Contabil::Model::cliente &);
    			bool delPart(int);
    			Contabil::Model::Pessoa& getPart();
  			private:
    			Contabil::Model::Cliente cliente;
		};
	}
}

#endif