#include "Veterinario.hpp"

// contrutores e destrutores {
Veterinario::Veterinario() {}
Veterinario::~Veterinario() {}
// } construtores e destrutores

// getters {
std::string Veterinario::get_m_crmv(void) {
	return m_crmv;
}
// } getters

// setters {
void Veterinario::set_m_crmv(std::string crmv) {
	m_crmv = crmv;
}
// } setters

#endif
