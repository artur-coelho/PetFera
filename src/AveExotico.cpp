#include "AveExotico.hpp"

// construtores e destrutores {
AveExotico::AveExotico() {}
AveExotico::AveExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string pais_origem) :
		 	   Ave(id, classe, nome_cientifico,	sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
AveExotico::~AveExotico() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters

std::ostream& AveExotico::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Tamanho do bico (cm): " << m_tamanho_do_bico_cm << endl
					  << "Envergadura das asas: " << m_envergadura_das_asas << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "País de origem: " << m_pais_origem << endl;
}

void AveExotico::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_tamanho_do_bico_cm << ";"
			  << m_envergadura_das_asas << ";"
			  << m_autorizacao_ibama << ";"
			  << m_pais_origem << ";";
}