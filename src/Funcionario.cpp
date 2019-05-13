#include "Funcionario.hpp"

int Funcionario::get_m_id(void){
	return m_id;
}

std::string Funcionario::get_m_nome(void){
	return m_nome;
}

std::string Funcionario::get_m_cpf(void){
	return m_cpf;
}

short Funcionario::get_m_idade(void){
	return m_idade;
}

short Funcionario::get_m_tipo_sanguineo(void){
	return m_tipo_sanguineo;
}

char Funcionario::get_m_fator_rh(void){
	return m_fator_rh;
}

std::string Funcionario::get_m_especialidade(void){
	return m_especialidade;
}