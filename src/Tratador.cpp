/**
* @file	Tratador.cpp
* @brief	Implementação da classe que representa os tratadores dos animais
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "Tratador.hpp"

/**
* @brief	Construtor padrão da classe Tratador
*/
Tratador::Tratador() { }

/**
* @brief	Construtor paramaetrizado da classe Tratador
*/
Tratador::Tratador(int id, std::string nome, std::string cpf, short idade,
				std::string tipo_sanguineo, char fator_rh, std::string especialidade,
				int nivel_de_seguranca) :
				Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh,
				especialidade), m_nivel_de_seguranca(nivel_de_seguranca) { }

/**
* @brief	Destrutor da classe Tratador
*/
Tratador::~Tratador() { }


// getters {
int Tratador::get_m_nivel_de_seguranca(void) {
	return m_nivel_de_seguranca;
}
// } getters

// setters {
void Tratador::set_m_nivel_de_seguranca(int nivel_de_seguranca) {
	m_nivel_de_seguranca = nivel_de_seguranca;
}
// } setters

/**
* @brief Método que escreve os dados do tratador em um arquivo
*/
void Tratador::escreverEmArquivo(){
	std::ofstream arquivo ("Funcionarios.csv");
	if (arquivo) {
		arquivo.seekp (0, arquivo.end);
		arquivo
		 			<< m_id << ";"
					<< "Veterinario" << ";"
					<< m_nome << ";"
					<< m_cpf << ";"
					<< m_idade << ";"
					<< m_tipo_sanguineo << ";"
					<< m_fator_rh << ";"
					<< m_especialidade << ";"
					<< m_nivel_de_seguranca << ";" << std::endl;
	} else {
		std::cerr << "Falha ao escrever em Funcionarios.csv" << std::endl;
	}
}

/**
* @brief	Sobrecarga da função print da biblioteca ostream
*/
std::ostream& Tratador::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Nome: " << m_nome << endl
					  << "CPF: " << m_cpf << endl
					  << "Idade: " << m_idade << endl
					  << "Tipo Sanguíneo: " << m_tipo_sanguineo << endl
					  << "Fator RH: " << m_fator_rh << endl
					  << "Especialidade: " << m_especialidade << endl
					  << "Nível de Segurança: " << m_nivel_de_seguranca << endl;
}
