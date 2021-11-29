/*****  Controle de eventos  *****/
#ifndef TRANSACOESDAO_H
#define TRANSACOESDAO_H

#include "DAO.h"
#include "../Model/Transacoes.h"

using namespace Contabil;
using namespace Contabil::Model;

namespace Contabil{
	namespace DAO{
		class TransacoesDAO : public Component::DAO{
			public:
    			TrasacoesDAO();
    			TransacoesDAO(int, std::string, float);
    			~TransacoesDAO();
    			
    			/**********  Events  **********/
			    Transacao& findCode(std::string);
			    Transacao& findPart(std::string);
    			int Insert(Transacao &);
    			int change(Transacao &);
    			int Erase(Transacao &);
		};
	}
}
#endif
