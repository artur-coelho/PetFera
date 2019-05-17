#include "Veterinario.hpp"

// contrutores e destrutores {
Veterinario() {}
~Veterinario() {}
// } construtores e destrutores

// getters {
std::string get_m_crmv(void) {
	return m_crmv;
}
// } getters

// setters {
void set_m_crmv(std::string crmv) {
	m_crmv = crmv;
}
// } setters

#endif
