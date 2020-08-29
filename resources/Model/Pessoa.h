/*****  Controle gestor dos dados  *****/
#include "../Component/Model.h"

using namespace Contabil;

namespace Contabil{
	namespace Model{
		class Pessoa : public Component::Model{
			public:
    			/**********  GETTERS & SETTERS  **********/
    			void setName(std::string);
    			void setAddress(std::string);
    			void setDistrict(std::string);
    			void setCity(std::string);
    			void setComplement(std::string);
    			void setNumber(int);
    			void setNationalRegister(char *);
    			void setRG(char *);
    			void setBirday(char *);
    			
    			std::string getName();
    			std::string getAddress();
    			std::string getDistrict();
    			std::string getCity();
    			std::string getComplement();
    			int getNumber();
    			std::string getNationalRegister();
    			std::string getRG();
    			std::string getBirday();
  			private:
    			std::string nome, endereco, bairro, cidade, complemento;
    			char cpf, rg, nascimento;
				int numero;
		};
	}
}
