#include "Anfibio.hpp"

// construtores e destrutores {
Anfibio::Anfibio() {}
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
