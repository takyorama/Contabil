#include "../Component/DAO.h"

using namespace Contabil::Component;

void DAO::setError(std::string error){ this->error = error; }
std::string DAO::getError(){ return this->error; }

