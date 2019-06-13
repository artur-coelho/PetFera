#ifndef _TRATADOR_HPP_
#define _TRATADOR_HPP_

#include "Funcionario.hpp"
using std::endl;

class Tratador : public Funcionario {
	private:
		std::ostream& print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Nome: " << m_nome << endl
					  << "CPF: " << m_cpf << endl
					  << "Idade: " << m_idade << endl
					  << "Tipo Sanguíneo: " << m_tipo_sanguineo << endl
					  << "Fator RH: " << m_fator_rh << endl
					  << "Especialidade: " << m_especialidade << endl
					  << "Nível de Segurança: " << m_nivel_de_seguranca << endl;
		}
	public:
		// construtores e destrutores {
		Tratador();
		Tratador(int id, std::string nome, std::string cpf, short idade, 
				std::string tipo_sanguineo, char fator_rh, std::string especialidade,
				int nivel_de_seguranca);
		~Tratador();
		// } construtores e destrutores
		
		// getters {
		int get_m_nivel_de_seguranca(void);
		// } getters

		// setters {
		void set_m_nivel_de_seguranca(int nivel_de_seguranca);
		// } setters

		void escreverEmArquivo();
		void alterarDado();
		void imprime_funcionario();

	protected:
		// membros {
		int m_nivel_de_seguranca;
		// } membros
};

#endif
