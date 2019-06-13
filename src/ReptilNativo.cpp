#include "ReptilNativo.hpp"

// construtores e destrutores {
ReptilNativo::ReptilNativo() {}
ReptilNativo::ReptilNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao) : 
		 	   Reptil(id, classe, nome_cientifico, sexo, tamanho,dieta, veterinario, tratador, 
		 	   nome_batismo, venenoso,tipo_veneno),
		 	   AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) { }
ReptilNativo::~ReptilNativo() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters

void ReptilNativo::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_venenoso << ";"
			  << m_tipo_veneno << ";"
			  << m_autorizacao_ibama << ";"
			  << m_uf_origem << ";"
			  << m_autorizacao << ";";
}