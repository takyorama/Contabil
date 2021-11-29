#include "../Model.h"

//Contabil::Component::Model::Model(){}
Contabil::Component::Model::Model(Contabil::Component::Model& model){}
Contabil::Component::Model& Contabil::Component::Model::operator=(const Contabil::Component::Model& model){ return *this; }

std::string Contabil::Component::Model::toString(){ return ""; }
std::string Contabil::Component::Model::responseJSON(){ return ""; }
std::string Contabil::Component::Model::responseXML(){ return ""; }
std::string Contabil::Component::Model::all(){ return ""; }