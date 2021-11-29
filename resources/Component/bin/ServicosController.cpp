#include <iostream>
#include <vector>

#include "../ServicosController.h"

void Contabil::Servicos::ServicosController::Index(){
	std::vector<Contabil::Component::Servico> servico;
	
	// servico = ServicosRepository::all();
	
	//std::cout << servico.front();
}
void Contabil::Servicos::ServicosController::Create(){
	std::cout << "Novo servico" << std::endl;
}

void Contabil::Servicos::ServicosController::New(){
	std::cout << "Servico cadastrado" << std::endl;
}
void Contabil::Servicos::ServicosController::Store(Contabil::Component::Servico &servico){//ServicosRequest request
	/**
	 * Servico servicos;
	 * 
	 * servico = request->all();
	 * 
	 * ServicosRepository::Insert(servico);
	 *
	 * Contabil::templates::listaServicos("descricao do servico", "dd/mm/YYYY", "endereco do servico");
	 */
}
void Contabil::Servicos::ServicosController::Edit(int id){
	/**
	 * Model servico = new Servico();
	 * servico = Database::getById(id);
	 *
	 * Contabil::templates::forms::Editaservico(servico);
	 */
}
void Contabil::Servicos::ServicosController::Update(int id, Contabil::Component::Servico &servico){//ServicosRequest request
	/**
	* Model servico = request->all();
	*
	* Database::(servico)::Update(id);
	* 
	* Contabil::templates::lists::mostraServico();
	*/
}
void Contabil::Servicos::ServicosController::Delete(int id){
	/**
	 * Database::Select("*")::from("servicos")::where("id="+id)::delete(id);
	 * 
	 * Contabil::templates::lists::Services();
	 */
}