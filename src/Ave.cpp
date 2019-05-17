#include "Ave.hpp"

// construtores e destrutores {
Ave() {}
~Ave() {}
// } construtores e destrutores

// getters {
double get_m_tamanho_do_bico_cm(void) {
	return m_tamanho_do_bico_cm;
}

double get_m_envergadura_das_asas(void) {
	return m_envergadura_das_asas;
}
// } getters

// setters {
void set_m_tamanho_do_bico_cm(double tamanho_do_bico_cm) {
	m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}

void set_m_envergadura_das_asas(double envergadura_das_asas) {
	m_envergadura_das_asas = envergadura_das_asas;
}
// } setters

#endif
