#include "Anfibio.hpp"

// construtores e destrutores {
Anfibio::Anfibio() {}
Anfibio::Anfibio(int id, std::string classe, std::string nome_cientifico,
		char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		Tratador tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda) :
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

/*void Anfibio::imprimeAnimal() {
	cout << m_id << endl
		  << m_classe << endl
	   	  << m_nome_cientifico << endl
		  << m_sexo << endl
		  << m_tamanho << endl
		  << m_dieta << endl
		  << m_veterinario << endl
		  << m_tratador << endl
		  << m_nome_batismo << endl
		  << m_total_de_mudas << endl
		  << m_ultima_muda << endl;
}*/
