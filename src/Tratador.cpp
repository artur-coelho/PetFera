#include "Tratador.hpp"

// construtores e destrutores {
Tratador::Tratador() {}
Tratador::Tratador(int id, std::string nome, std::string cpf, short idade, 
				std::string tipo_sanguineo, char fator_rh, std::string especialidade,
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

void Tratador::escreverEmArquivo() {
	std::ofstream arqDados("Funcionarios.csv");
	if(arqDados.bad()) {
		std::cerr << "Erro ao abrir o arquivo!" << std::endl;
		exit(1);
	} else {
		std::cout << "algo" << std::endl;
	}
}

void Tratador::alterarDado() {
	return;
}

void Tratador::imprime_funcionario() {
	std::cout << m_id << ";"
			 << m_nome << ";"
			 << m_cpf << ";"
			 << m_idade << ";"
			 << m_tipo_sanguineo << ";"
			 << m_fator_rh << ";"
			 << m_especialidade << ";"
			 << m_nivel_de_seguranca << ";" << endl;
}
