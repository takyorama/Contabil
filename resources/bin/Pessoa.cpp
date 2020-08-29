#include "../Model/Pessoa.h"

#include <string.h>

using namespace Contabil::Model;

void Pessoa::setAddress(std::string address){ this->endereco = address; }
void Pessoa::setName(std::string name){ this->nome = name; }
void Pessoa::setDistrict(std::string district){ this->bairro = district; }
void Pessoa::setCity(std::string city){ this->cidade = city; }
void Pessoa::setComplement(std::string complement){ this->complemento = complement; }
void Pessoa::setNumber(int number){ this->numero = number; }
void Pessoa::setNationalRegister(char *reg){}
void Pessoa::setRG(char *reg){}
void Pessoa::setBirday(char *birday){}

std::string Pessoa::getAddress(){}
std::string Pessoa::getName(){}
std::string Pessoa::getDistrict(){}
std::string Pessoa::getCity(){}
std::string Pessoa::getComplement(){}
int Pessoa::getNumber(){}
std::string Pessoa::getNationalRegister(){}
std::string Pessoa::getRG(){}
std::string Pessoa::getBirday(){}
