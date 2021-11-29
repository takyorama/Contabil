#ifndef SERVICOSDAO_H
#define SERVICOSDAO_H

#include "DAO.h"
#include "../Model.h"
#include "../../Component/Servico.h"

using namespace Contabil;

namespace Contabil{
	namespace DAO{
		class ServicosDAO : public Component::DAO{
			public:
				
		    /**********  EVENTOS  **********/
				Component::Servico& Find(std::string);
				bool Insert(Component::Servico &);
				bool change(int, Component::Servico &);
		};
	}
}
#endif
