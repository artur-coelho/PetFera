#include "Mamifero.hpp"

// construtores e destrutores {
Mamifero::Mamifero() {}
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
