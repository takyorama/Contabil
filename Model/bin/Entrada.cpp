#include "../Entrada.h"

using namespace Contabil;

Model::Entrada::Entrada(){}
Model::Entrada::~Entrada(){}

bool Model::Entrada::addPart(Model::Pessoa &part){
	return false;
}
bool Model::Entrada::delPart(int part){
	return false;
}
bool Model::Entrada::setPart(Model::Pessoa &part){
	return false;
}

Model::Pessoa& Model::Entrada::getPart(){
	return this->pessoa;
}