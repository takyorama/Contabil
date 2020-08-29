/*****  Controle gestor dos dados  *****/
#include "../Component/Model.h"

using namespace Contabil;

namespace Contabil{
	namespace Model{
		class Transacao : public Component::Model{
			public:
				Transacao();
				Transacao(int, std::string, float);
				~Transacao();
				
				/**********  SETTERS & GETTERS  **********/
				void setType(std::string);
				void setTotal(float);
    			
				std::string getType();
				float getTotal();
			private:
				std::string tipo;
				float total;
		};
	}
}
