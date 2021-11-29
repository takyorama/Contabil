#include "../DAO/DAO.h"

using namespace Contabil;


//Component::DAO::DAO(){}
//Component::DAO::DAO(const Component::Model &model){ this->model = model; }
std::string Component::DAO::All(){ return this->model.all(); }
Component::Model Component::DAO::getById(int id){return  this->model; }
Component::Model Component::DAO::Select(std::string query){ return this->model; }

bool Component::DAO::Include(Contabil::Component::Model &model){ return false; }
bool Component::DAO::Update(int id, Contabil::Component::Model &model){ return false; }
bool Component::DAO::Delete(int id){ return false; }

void Component::DAO::setError(std::string error){ this->error = error; }
std::string Component::DAO::getError(){return this->error; }