#include "AnimalExotico.hpp"

// construtores e destrutores {
AnimalExotico::AnimalExotico() {}
AnimalExotico::~AnimalExotico() {}
// } construtores e destrutores

// getters {
std::string AnimalExotico::get_m_pais_origem(void) {
	return m_pais_origem;
}
// } getters

// setters {
void AnimalExotico::set_m_pais_origem(std::string pais_origem) {
	m_pais_origem = pais_origem;
}
// } setters

