#include "Anfibio.hpp"

// construtores e destrutores {
Anfibio::Anfibio() {}
Anfibio::Anfibio(int id, std::string classe, std::string nome_cientifico,
		char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda) :
		Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_total_de_mudas(total_de_mudas), m_ultima_muda(ultima_muda) { }
Anfibio::~Anfibio() {}
// } construtores e destrutores

// getters {
int Anfibio::get_m_total_de_mudas(void) {
	return m_total_de_mudas;
}

Date Anfibio::get_m_ultima_muda(void) {
	return m_ultima_muda;
}
// } getters

// setters {
void Anfibio::set_m_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
}

void Anfibio::set_m_ultima_muda(Date ultima_muda) {
	m_ultima_muda = ultima_muda;
}
// } setters

void Anfibio::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_total_de_mudas << ";"
			  << m_ultima_muda << ";";
}

