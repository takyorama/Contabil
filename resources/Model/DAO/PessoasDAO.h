#ifndef PESSOASDAO_H
#define PESSOASDAO_H

#include "DAO.h"
#include "../Model/Pessoa.h"

using namespace Contabil;

namespace Contabil{
	namespace DAO{
		class PessoasDAO : public Component::DAO{
			public:
				PessoasDAO(Model::Pessoa &);
				~PessoaDAO();
				Model::Pessoa& getByName(std::string);
				Model::Pessoa& getByName(std::string);
				Model::Pessoa& getByName(std::string);
				bool Insert(Pessoa &);
				bool Change(int, Pessoa &);
				bool Erase(int);
			protected:
				Model::Pessoa pessoa;
		};
	}
}
#endif
