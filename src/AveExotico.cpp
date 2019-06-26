/**
* @file	AveExotico.cpp
* @brief	Implementação da classe que representa as aves exóticas
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "AveExotico.hpp"

/**
* @brief	Construtor padrão da classe AveExotico
*/
AveExotico::AveExotico() { }
/**
* @brief	Construtor parametrizado da classe AveExotico
*/
AveExotico::AveExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm,
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string pais_origem) :
		 	   Ave(id, classe, nome_cientifico,	sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
/**
* @brief	Destrutor da classe AveExotico
*/
AveExotico::~AveExotico() { }
/

// getters {
// } getters

// setters {
// } setters

/**
* @brief	Sobrecarga da função print da biblioteca ostream
*/
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

/**
* @brief	Método que escreve os dados da Ave em um arquivo
*/
void AveExotico::escreverEmArquivo(){
	std::ofstream arquivo ("Animais.csv");
	if (arquivo) {
		arquivo.seekp (0, arquivo.end);
		arquivo
		 			<< m_id << ";"
					<< m_classe << ";"
					<< m_nome_cientifico << ";"
					<< m_sexo << ";"
					<< m_tamanho << ";"
					<< m_dieta << ";"
					<< m_veterinario->get_m_id() << ";"
					<< m_tratador->get_m_id() << ";"
					<< m_nome_batismo << ";"
					<< m_tamanho_do_bico_cm << ";"
					<< m_envergadura_das_asas << ";"
					<< m_autorizacao_ibama << ";"
					<< m_pais_origem << ";"
					<< std::endl;
	} else {
		std::cerr << "Falha ao escrever em Animais.csv" << std::endl;
	}
}
