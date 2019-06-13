#include "Funcionario.hpp"

//construtores e destrutores {
		Funcionario::Funcionario(){ }
		Funcionario::Funcionario(int id, std::string nome, std::string cpf, short idade, 
					std::string tipo_sanguineo, char fator_rh, std::string especialidade) : 
					m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo),
					m_fator_rh(fator_rh), m_especialidade(especialidade) { }
		Funcionario::~Funcionario(){ }
		//	} construtores e destrutores

// getters {
int Funcionario::get_m_id(void) {
	return m_id;
}

std::string Funcionario::get_m_nome(void) {
	return m_nome;
}

std::string Funcionario::get_m_cpf(void) {
	return m_cpf;
}

short Funcionario::get_m_idade(void) {
	return m_idade;
}

std::string Funcionario::get_m_tipo_sanguineo(void) {
	return m_tipo_sanguineo;
}

char Funcionario::get_m_fator_rh(void) {
	return m_fator_rh;
}

std::string Funcionario::get_m_especialidade(void) {
	return m_especialidade;
}
// } getters

// setters {
void Funcionario::set_m_id(int id) {
	m_id = id;
}

void Funcionario::set_m_nome(std::string nome) {
	m_nome = nome;
}

void Funcionario::set_m_cpf(std::string cpf) {
	m_cpf = cpf;
}

void Funcionario::set_m_idade(short idade) {
	m_idade = idade;
}

void Funcionario::set_m_tipo_sanguineo(std::string tipo_sanguineo) {
	m_tipo_sanguineo = tipo_sanguineo;
}

void Funcionario::set_m_fator_rh(char fator_rh) {
	m_fator_rh = fator_rh;
}

void Funcionario::set_m_especialidade(std::string especialidade) {
	m_especialidade = especialidade;
}
// } setters

// operadores {
std::ostream& operator<<(std::ostream& os, const Funcionario& funcionario) {
	return funcionario.print(os);
}

// } operadores

