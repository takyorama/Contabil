/*****  Controle gestor dos dados  *****/
#include "../Component/Model.h"
#include "Pessoa.h"

using namespace Contabil;
using namespace Contabil::Model;

namespace Contabil{
	namespace Model{
		class Entrada : public Component::Controller{
			public:
				Entrada();
    			~Entrada();
    		/**********  GETTERS & SETTERS  **********/
    			bool setPart(Pessoa &);
    			bool addPart(Pessoa &);
    			bool delPart(int);
    			Pessoa& getPart();
  			private:
    			Pessoa pessoa;
		};
	}
}
