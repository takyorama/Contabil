#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Interfaces/InterfaceController.h"

namespace Contabil{
	namespace Component{
		class Controller : public InterfaceController{
			public:
				
				void setError(std::string);
				std::string getError();
			protected:
				std::string error;
		};
	}
}
#endif
