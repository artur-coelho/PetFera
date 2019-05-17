#include "AnimalSilvestre.hpp"

// construtores e destrutores {
AnimalSilvestre();
~AnimalSilvestre();
// } construtores e destrutores

// getters {
std::string get_m_autorizacao_ibama(void) {
	return m_autorizacao_ibama;
}
// } getters

// setters {
void set_m_autorizacao_ibama(std::string autorizacao_ibama) {
	m_autorizacao_ibama = autorizacao_ibama;
}
// } setters

#endif
