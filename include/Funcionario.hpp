#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <string>

class Funcionario {
	public:
		//construtores e destrutores {
		Funcionario();
		Funcionario(int id, std::string nome, std::string cpf, short idade, 
					short tipo_sanguineo, char fator_rh, std::string especialidade);
		~Funcionario();
		//	} construtores e destrutores

		// getters {
		int get_m_id(void);
		std::string get_m_nome(void);
		std::string get_m_cpf(void);
		short get_m_idade(void);
		short get_m_tipo_sanguineo(void);
		char get_m_fator_rh(void);
		std::string get_m_especialidade(void);
		// } getters

		// setters {
		void set_m_id(int id);
		void set_m_nome(std::string nome);
		void set_m_cpf(std::string cpf);
		void set_m_idade(short idade);
		void set_m_tipo_sanguineo(short tipo_sanguineo);
		void set_m_fator_rh(char fator_rh);
		void set_m_especialidade(std::string especialidade);
		// } setters

		virtual void escreverEmArquivo() {}
		virtual void alterarDado() {}

	protected:
		// membros {
		int m_id;
		std::string m_nome;
		std::string m_cpf;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;
		// } membros
};

#endif
