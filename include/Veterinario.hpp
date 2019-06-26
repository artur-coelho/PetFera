/**
* @file	Veterinario.hpp
* @brief	Classe que representa os veterinários
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _VETERINARIO_HPP_
#define _VETERINARIO_HPP_

#include "Funcionario.hpp"

using std::endl;

class Veterinario : public Funcionario {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// contrutores e destrutores {
		Veterinario();
		Veterinario(int id, std::string nome, std::string cpf, short idade,
					std::string tipo_sanguineo, char fator_rh, std::string especialidade,
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

	protected:
		// membros {
		std::string m_crmv;	/**< Define a crmv do veterinário
		// } membros
};

#endif
