#include "AnimalNativo.hpp"

// construtores e destrutores {
AnimalNativo::AnimalNativo() {}
AnimalNativo::AnimalNativo(std::string autorizacao_ibama, std::string uf_origem) :
						  AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem) { }
AnimalNativo::~AnimalNativo() {}
// } construtores e destrutores

// getters {
std::string AnimalNativo::get_m_uf_origem(void) {
 return m_uf_origem;
}
// } getters

// setters {
void AnimalNativo::set_m_uf_origem(std::string uf_origem) {
	m_uf_origem = uf_origem;
}
// } setters
