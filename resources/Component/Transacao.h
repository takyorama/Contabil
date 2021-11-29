#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>

namespace Contabil{
	namespace Component{
		class Transacao{
			public:
				Transacao();
				Transacao(int, std::string, float);
				~Transacao();
				
				/**********  SETTERS & GETTERS  **********/
				void setType(std::string);
    			
				std::string getType();
				float getTotal();
			private:
				std::string tipo;
				float total;
		};
	}
}

#endif