#ifndef _VETERINARIO_HPP_
#define _VETERINARIO_HPP_

#include "Funcionario.hpp"

using std::endl;

class Veterinario : public Funcionario {
	private:
		std::ostream& print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Nome: " << m_nome << endl
					  << "CPF: " << m_cpf << endl
					  << "Idade: " << m_idade << endl
					  << "Tipo Sanguíneo: " << m_tipo_sanguineo << endl
					  << "Fator RH: " << m_fator_rh << endl
					  << "Especialidade: " << m_especialidade << endl
					  << "CRMV: " << m_crmv << endl;
		}
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
		void alterarDado();
		void imprime_funcionario();

	protected:
		// membros {
		std::string m_crmv;
		// } membros
};

#endif
