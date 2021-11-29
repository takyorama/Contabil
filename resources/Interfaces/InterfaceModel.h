#include <iostream>

namespace Contabil{
	namespace Interfaces{
		class InterfaceModel{
			virtual std::string toString() =0;
			virtual std::string all() =0;
		};
	}
}