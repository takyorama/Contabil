#ifndef DAO_H
#define DAO_H

#include "../Interfaces/InterfacesDAO.h"

namespace Contabil{
	namespace Component{
		class DAO : public InterfacesDAO{
			public:
				void setError(std::string);
				std::string getError();
			protected:
				std::string error;
		};
	}
}
#endif
