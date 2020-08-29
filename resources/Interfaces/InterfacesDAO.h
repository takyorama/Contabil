#include <iostream>

class InterfacesDAO{
	public:
		virtual void setError(std::string) =0;
		virtual std::string getError() =0;
	private:
		std::string error;
};
