#include "../Controller.h"

using namespace Contabil;

void Component::Controller::setError(std::string error){ this->error = error; }
std::string Component::Controller::getError(){ return this->error; }
