#include "MamiferoExotico.hpp"

// construtores e destrutores {
MamiferoExotico::MamiferoExotico() {}
MamiferoExotico::MamiferoExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string pais_origem):
		 	   Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, cor_pelo),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
MamiferoExotico::~MamiferoExotico() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters

void MamiferoExotico::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_cor_pelo << ";"
			  << m_autorizacao_ibama << ";"
			  << m_pais_origem << ";";
}