#ifndef _VETERINARIO_HPP_
#define _VETERINARIO_HPP_

#include "Funcionario.hpp"

#include <string>

class Veterinario : public Funcionario {
	public:
		// contrutores e destrutores {
		Veterinario();
		~Veterinario();
		// } construtores e destrutores

		// getters {
		std::string get_m_crmv(void);
		// } getters

		// setters {
		void set_m_crmv(std::string crmv);
		// } setters

	protected:
		// membros {
		std::string m_crmv;
		// } membros
};

#endif
