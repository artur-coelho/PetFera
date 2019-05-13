#include "Mamifero.hpp"

Mamifero::Mamifero() : Animal() {/*Construtor padrão*/}

Mamifero::~Mamifero() {/*Destrutor*/ }

void Mamifero::set_m_cor_pelo(std::string cor_pelo) {
	m_cor_pelo = cor_pelo;
}

std::string Mamifero::get_m_cor_pelo() {
	return m_cor_pelo;
}