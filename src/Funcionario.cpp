#include "Funcionario.hpp"

// getters {
int Funcionario::get_m_id(void) {
	m_id = id;
}

std::string Funcionario::get_m_nome(void) {
	m_nome = nome;
}

std::string Funcionario::get_m_cpf(void) {
	m_cpf = cpf;
}

short Funcionario::get_m_idade(void) {
	m_idade = idade;
}

short Funcionario::get_m_tipo_sanguineo(void) {
	m_tipo_sanguineo = tipo_sanguineo;
}

char Funcionario::get_m_fator_rh(void) {
	m_fator_rh = fator_rh;
}

std::string Funcionario::get_m_especialidade(void) {
	m_especialidade = especialidade;
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

void Funcionario::set_m_tipo_sanguineo(short tipo_sanguineo) {
	m_tipo_sanguineo = tipo_sanguineo;
}

void Funcionario::set_m_fator_rh(char fator_rh) {
	m_fator_rh = fator_rh;
}

void Funcionario::set_m_especialidade(std::string especialidade) {
	m_especialidade = especialidade;
}
// } setters

#endif
