/*****  Controle gestor dos dados  *****/
#include "../Component/Model.h"

using namespace Contabil;

namespace Contabil{
	namespace Model{
		class Servico : public Component::Model{
			public:
				Servico();
				Servico(int, std::string, float);
				
				/**********  GETTERS & SETTERS  **********/
				void setDescript(std::string);
				void setPrice(float);
				
				std::string getDescript();
				float getPrice();
			private:
				std::string descricao;
				float preco;
		};
	}
}
