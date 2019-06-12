#ifndef _VETERINARIO_HPP_
#define _VETERINARIO_HPP_

#include "Funcionario.hpp"

#include <string>

class Veterinario : public Funcionario {
	public:
		// contrutores e destrutores {
		Veterinario();
		Veterinario(int id, std::string nome, std::string cpf, short idade, 
					short tipo_sanguineo, char fator_rh, std::string especialidade,
					std::string crmv);
		~Veterinario();
		// } construtores e destrutores

		// getters {
		std::string get_m_crmv(void);
		// } getters

		// setters {
		void set_m_crmv(std::string crmv);
		// } setters
		
		void escreverEmArquivo();
		void alterarDado();

	protected:
		// membros {
		std::string m_crmv;
		// } membros
};

#endif
