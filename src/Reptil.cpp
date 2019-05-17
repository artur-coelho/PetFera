#include "Reptil.hpp"

// construtores e destrutores {
Reptil() {}
~Reptil() {}
// } construtores e destrutores

// getters {
bool get_m_venenoso(void) {
	return m_venenoso;
}

std::string get_m_tipo_veneno(void) {
	return m_tipo_veneno;
}
// } getters

// setters {
void set_m_venenoso(bool venenoso) {
	m_venenoso = venenoso;
}

void set_m_tipo_veneno(std::string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
}
// } setters

#endif
