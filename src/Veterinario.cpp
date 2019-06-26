/**
* @file	Veterinario.cpp
* @brief	Implementação da classe que representa os veterinários
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "Veterinario.hpp"

/**
* @brief	Construtor padrão da classe Veterinario
*/
Veterinario::Veterinario() { }

/**
* @brief	Construtor parametrizado da classe Veterinario
*/
Veterinario::Veterinario(int id, std::string nome, std::string cpf, short idade,
						std::string tipo_sanguineo, char fator_rh, std::string especialidade,
						std::string crmv) :
						Funcionario(id, nome, cpf, idade, tipo_sanguineo,
						fator_rh, especialidade), m_crmv(crmv) { }

/**
* @brief	Destrutor da classe Veterinario
*/
Veterinario::~Veterinario() { }


// getters {
std::string Veterinario::get_m_crmv(void) {
	return m_crmv;
}
// } getters

// setters {
void Veterinario::set_m_crmv(std::string crmv) {
	m_crmv = crmv;
}
// } setters

/**
* @brief Método que escreve os dados do veterinário em um arquivo
*/
void Veterinario::escreverEmArquivo(){
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
					<< m_crmv << ";" << std::endl;
	} else {
		std::cerr << "Falha ao escrever em Funcionarios.csv" << std::endl;
	}
}

/**
* @brief	Sobrecarga da função print da biblioteca ostream
*/
std::ostream& Veterinario::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Nome: " << m_nome << endl
					  << "CPF: " << m_cpf << endl
					  << "Idade: " << m_idade << endl
					  << "Tipo Sanguíneo: " << m_tipo_sanguineo << endl
					  << "Fator RH: " << m_fator_rh << endl
					  << "Especialidade: " << m_especialidade << endl
					  << "CRMV: " << m_crmv << endl;
}
