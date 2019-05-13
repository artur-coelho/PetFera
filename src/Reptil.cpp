#include "Reptil.hpp"

Reptil::Reptil() : Animal() { /*Construtor padrão*/}

Reptil::~Reptil() { /* Destrutor */}

void Reptil::set_m_venenoso(bool venenoso) {
	m_venenoso = venenoso;
}

bool Reptil::get_m_venenoso() {
	return m_venenoso;
}

void Reptil::set_m_tipo_veneno(std::string tipo_veneno) {
	tipo_veneno = m_tipo_veneno;
}

std::string Reptil::get_m_tipo_veneno() {
	return m_tipo_veneno;
}