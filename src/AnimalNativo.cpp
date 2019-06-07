#include "AnimalNativo.hpp"

// construtores e destrutores {
AnimalNativo::AnimalNativo() {}
AnimalNativo::AnimalNativo(std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao) :
						  AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem), m_autorizacao(autorizacao) { }
AnimalNativo::~AnimalNativo() {}
// } construtores e destrutores

// getters {
std::string AnimalNativo::get_m_uf_origem(void) {
 return m_uf_origem;
}

std::string AnimalNativo::get_m_autorizacao(void) {
 return m_autorizacao;
}
// } getters

// setters {
void AnimalNativo::set_m_uf_origem(std::string uf_origem) {
	m_uf_origem = uf_origem;
}

void AnimalNativo::set_m_autorizacao(std::string autorizacao) {
	m_autorizacao = autorizacao;
}
// } setters
