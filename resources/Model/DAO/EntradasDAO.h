#ifndef ENTRADASDAO_H
#define ENTRADASDAO_H

#include <iostream>

#include "../../Model/Entrada.h"
#include "DAO.h"

using namespace Contabil;

namespace Contabil{
	namespace DAO{
		class EntradasDAO : public Component::DAO{
			public:
				EntradaDAO(Model::Entrada &);
				~EntradasDAO();
				
    		/***********  Events  **********/
				Entrada& Find(std::string);
				int Insert(Entrada &);
				int Change(Entrada &);
				int Erase(Entrada &);
			private:
				Model::Entrada entrada;
		};
	}
}
#endif
