#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

#include "Model.h"

namespace Contabil{
	namespace Model{
		class Pessoa : public Contabil::Component::Model{
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
    			
    			/**********  CRUD  **********/
				 
				// std::string all();
				// Pessoa all();
				// Pessoa getById(int);
				// Pessoa getByName(std::string);
				// Pessoa getByCPF(char *);
				// Pessoa getByRG(char *);
				// bool include(std::string);
				// bool update(int, std::string);
				// bool delete(int);
  			private:
    			std::string nome, endereco, bairro, cidade, complemento;
    			char cpf, rg, nascimento;
				int numero;
		};
	}
}

#endif