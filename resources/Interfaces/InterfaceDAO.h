#include <iostream>

class InterfaceDAO{
	public:
		virtual bool Insert() =0;
		virtual bool Change() =0;
		virtual bool Erase() =0;
		virtual void setError(std::string) =0;
		virtual std::string getError() =0;
	private:
		std::string error;
};
