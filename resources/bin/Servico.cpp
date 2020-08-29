#include "../Model/Servico.h"

using namespace Contabil::Model;

Servico::Servico(){ this->descricao = "";this->preco = 0; }
Servico::Servico(int code, std::string descript, float price){this->descricao = descript ;this->preco = price;}

/**********  GETTERS & SETTERS  **********/
void Servico::setDescript(std::string descript){ this->descricao = descript; }
void Servico::setPrice(float price){ this->preco = price; }

std::string Servico::getDescript(){ return this->descricao; }
float Servico::getPrice(){ return this->preco; }
