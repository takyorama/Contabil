#ifndef DAO_H
#define DAO_H

#include "../../Interfaces/InterfaceDAO.h"
#include "../Model.h"

namespace Contabil{
	namespace Component{
		class DAO : public InterfaceDAO{
			public:
				DAO();
				DAO(const Contabil::Component::Model &);
				std::string All();
				Contabil::Component::Model getById(int);
				Contabil::Component::Model Select(std::string);
				bool Include(Contabil::Component::Model &);
				bool Update(int, Contabil::Component::Model &);
				bool Delete(int);
				
				void setError(std::string);
				std::string getError();
			protected:
				std::string error;
				Contabil::Component::Model model;
		};
	}
}
#endif
