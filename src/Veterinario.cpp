#include "Veterinario.hpp"

// contrutores e destrutores {
Veterinario::Veterinario() {}
Veterinario::Veterinario(int id, std::string nome, std::string cpf, short idade, 
						short tipo_sanguineo, char fator_rh, std::string especialidade,
						std::string crmv) : 
						Funcionario(id, nome, cpf, idade, tipo_sanguineo,
						fator_rh, especialidade), m_crmv(crmv) { }
Veterinario::~Veterinario() {}
// } construtores e destrutores

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


void Veterinario::escreverEmArquivo() {
	return;
}

void Veterinario::alterarDado() {
	return;
}