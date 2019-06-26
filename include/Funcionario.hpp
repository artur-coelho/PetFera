/**
* @file	Funcionario.hpp
* @brief	Classe que representa os funcionarios
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <iostream>
#include <fstream>
#include <string>

class Funcionario {
	private:
		virtual std::ostream& print(std::ostream&) const = 0;
	public:
		//construtores e destrutores {
		Funcionario();
		Funcionario(int id, std::string nome, std::string cpf, short idade,
					std::string tipo_sanguineo, char fator_rh, std::string especialidade);
		~Funcionario();
		//	} construtores e destrutores

		// getters {
		int get_m_id(void);
		std::string get_m_nome(void);
		std::string get_m_cpf(void);
		short get_m_idade(void);
		std::string get_m_tipo_sanguineo(void);
		char get_m_fator_rh(void);
		std::string get_m_especialidade(void);
		// } getters

		// setters {
		void set_m_id(int id);
		void set_m_nome(std::string nome);
		void set_m_cpf(std::string cpf);
		void set_m_idade(short idade);
		void set_m_tipo_sanguineo(std::string tipo_sanguineo);
		void set_m_fator_rh(char fator_rh);
		void set_m_especialidade(std::string especialidade);
		// } setters

		virtual void escreverEmArquivo() = 0;

		//operadores
		friend std::ostream& operator<<(std::ostream& os, const Funcionario& funcionario);

	protected:
		// membros {
		int m_id;	/**< Define o id do funcionário	*/
		std::string m_nome;	/**< Define o nome do funcionário */
		std::string m_cpf;	/**< Define o cpf do funcionário */
		short m_idade;	/**< Define a idade do funcionário	*/
		std::string m_tipo_sanguineo;	/**< Define o tipo sanguíneo do funcionário	*/
		char m_fator_rh;	/**< Define se o funcionário possui fator RH ou não	*/
		std::string m_especialidade;	/**< Define qual a especialidade do funcionário(tratador ou veterinário) */
		// } membros
};

#endif
