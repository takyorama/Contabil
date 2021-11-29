#include "../Transacao.h"

using namespace Contabil;

Component::Transacao::Transacao(){}
Component::Transacao::Transacao(int id, std::string descript, float price){}
Component::Transacao::~Transacao(){}
void Component::Transacao::setType(std::string type){ this->tipo = type; }
float Component::Transacao::getTotal(){ return this->total; }
std::string Component::Transacao::getType(){ return this->tipo; }