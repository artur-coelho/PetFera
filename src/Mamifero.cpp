/**
* @file	Mamifero.cpp
* @brief	Implementação da classe que representa os mamíferos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "Mamifero.hpp"

/**
* @brief	Construtor padrão da classe Mamifero
*/
Mamifero::Mamifero() { }

/**
* @brief	Construtor parametrizado da classe Mamifero
*/
Mamifero::Mamifero(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo) :
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_cor_pelo(cor_pelo) { }
		 	   
/**
* @brief	Destrutor da classe Mamifero
*/
Mamifero::~Mamifero() { }

// getters {
std::string Mamifero::get_m_cor_pelo(void) {
	return m_cor_pelo;
}
// } getters

// setters {
void Mamifero::set_m_cor_pelo(std::string cor_pelo) {
	m_cor_pelo = cor_pelo;
}
// } setters

/**
* @brief	Sobrecarga da função print da biblioteca ostream
*/
std::ostream& Mamifero::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Cor do pelo: " << m_cor_pelo << endl;
}

/**
* @brief	Método que escreve os dados do mamífero em um arquivo
*/
void Mamifero::escreverEmArquivo(){
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
					<< m_cor_pelo << ";"
					<< std::endl;
	} else {
		std::cerr << "Falha ao escrever em Animais.csv" << std::endl;
	}
}

/**
* @brief	Método que altera um determinado dado do mamífero
*/
void Mamifero::alterarDado(){
	return;
}
