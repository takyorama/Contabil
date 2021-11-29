#ifndef SERVICOSCONTROLLER_H
#define SERVICOSCONTROLLER_H

#include "Controller.h"
#include "Servico.h"

namespace Contabil{
	namespace Servicos{
		class ServicosController : public Contabil::Component::Controller{
			public:
				void Index();
				void Create();
				void New();
				void Store(Contabil::Component::Servico &);
				void Edit(int);
				void Update(int, Contabil::Component::Servico &);
				void Delete(int);
		};
	}
}
#endif