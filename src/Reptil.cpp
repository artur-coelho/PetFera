#include "Reptil.hpp"

// construtores e destrutores {
Reptil::Reptil() {}
Reptil::~Reptil() {}
// } construtores e destrutores

// getters {
bool Reptil::get_m_venenoso(void) {
	return m_venenoso;
}

std::string Reptil::get_m_tipo_veneno(void) {
	return m_tipo_veneno;
}
// } getters

// setters {
void Reptil::set_m_venenoso(bool venenoso) {
	m_venenoso = venenoso;
}

void Reptil::set_m_tipo_veneno(std::string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
}
// } setters
