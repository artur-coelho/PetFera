#include "Tratador.hpp"

// construtores e destrutores {
Tratador::Tratador() {}
Tratador::Tratador(int id, std::string nome, std::string cpf, short idade, 
				short tipo_sanguineo, char fator_rh, std::string especialidade,
				int nivel_de_seguranca) : 
				Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, 
				especialidade), m_nivel_de_seguranca(nivel_de_seguranca) { }
Tratador::~Tratador() {}
// } construtores e destrutores

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

void escreverEmArquivo() {
	return;
}

void alterarDado() {
	return;
}
