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

std::ostream& Mamifero::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Cor do pelo: " << m_cor_pelo << endl;
} 

void Mamifero::escreverEmArquivo(){
	return;
}

void Mamifero::alterarDado(){
	return;
}
