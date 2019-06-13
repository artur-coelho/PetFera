#include "Veterinario.hpp"

// contrutores e destrutores {
Veterinario::Veterinario() {}
Veterinario::Veterinario(int id, std::string nome, std::string cpf, short idade, 
						std::string tipo_sanguineo, char fator_rh, std::string especialidade,
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
	std::ofstream arqDados("Funcionarios.csv");
	if(arqDados.bad()) {
		std::cerr << "Erro ao abrir o arquivo!" << std::endl;
		exit(1);
	} else {
		std::cout << "algo" << std::endl;
	}
}

void Veterinario::alterarDado() {
	return;
}

void Veterinario::imprime_funcionario() {
	std::cout << m_id << ";"
			 << m_nome << ";"
			 << m_cpf << ";"
			 << m_idade << ";"
			 << m_tipo_sanguineo << ";"
			 << m_fator_rh << ";"
			 << m_especialidade << ";"
			 << m_crmv << ";" << endl;
}