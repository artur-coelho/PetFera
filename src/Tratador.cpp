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
