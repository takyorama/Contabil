#ifndef MODEL_H
#define MODEL_H

#include <iostream>

namespace Contabil{
	namespace Component{
		class Model{
			public:
				Model();
				Model(Contabil::Component::Model&);
				Model& operator=(const Model& model);
				std::string toString();
				std::string responseJSON();
				std::string responseXML();
				
				std::string all();
		};
	}
}

#endif
