#include "Anfibio.hpp"

// construtores e destrutores {
Anfibio::Anfibio() {}
Anfibio::~Anfibio() {}
// } construtores e destrutores

// getters {
int get_m_total_de_mudas(void) {
	return m_total_de_mudas;
}

date get_ultima_muda(void) {
	return ultima_muda;
}
// } getters

// setters {
void set_m_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
}

void set_m_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
}
// } setters
