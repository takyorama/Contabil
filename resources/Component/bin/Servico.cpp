#include "../Servico.h"
#include <sstream>

Contabil::Component::Servico::Servico(int code, std::string descript, float price): descricao(descript), preco(price){}
Contabil::Component::Servico::~Servico(){}
/**********  GETTERS & SETTERS  **********/
void Contabil::Component::Servico::setDescript(std::string descript){ this->descricao = descript; }
void Contabil::Component::Servico::setPrice(float price){ this->preco = price; }

std::string Contabil::Component::Servico::getDescript(){ return this->descricao; }
float Contabil::Component::Servico::getPrice(){ return this->preco; }

/**********  EVENTOS  **********/

std::string Contabil::Component::Servico::All(){
	std::string servico = "{\n  \"descricao\": \"" + this->getDescript() + "\"\n  \"preco\": \n}";
	return servico;
}
std::string Contabil::Component::Servico::Select(std::string query){
	std::string servico = "{\n  \"descricao\": \"" + this->getDescript() + "\"\n  \"preco\": \n}";
	return servico;
}
std::string Contabil::Component::Servico::findName(std::string descript){
	std::string servico = "{\n  \"descricao\": \"" + this->getDescript() + "\"\n  \"preco\": \n}";
	return servico;
}
bool Contabil::Component::Servico::Include(std::vector<std::string> servico){}
bool Contabil::Component::Servico::Update(int code, Contabil::Component::Servico &servico){
	try{
		this->setDescript(servico.getDescript());
		this->setPrice(servico.getPrice());
		return true;
	} catch(bool){
		return false;
	}
}
bool Contabil::Component::Servico::cancel(int code){}