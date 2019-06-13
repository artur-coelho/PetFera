#include "Mamifero.hpp"

// construtores e destrutores {
Mamifero::Mamifero() {}
Mamifero::Mamifero(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo) : 
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_cor_pelo(cor_pelo) { }
Mamifero::~Mamifero() {}
// } construtores e destrutores

// getters {
std::string Mamifero::get_m_cor_pelo(void) {
	return m_cor_pelo;
}
// } getters

// setters {
void Mamifero::set_m_cor_pelo(std::string cor_pelo) {
	m_cor_pelo = cor_pelo;
}
// } setters


void Mamifero::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_cor_pelo << ";";
}