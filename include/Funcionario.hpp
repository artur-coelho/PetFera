#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <string>

class Funcionario{
	public:
		int get_m_id(void);
		std::string get_m_nome(void);
		std::string get_m_cpf(void);
		short get_m_idade(void);
		short get_m_tipo_sanguineo(void);
		char get_m_fator_rh(void);
		std::string get_m_especialidade(void);	

	protected:
		int m_id;
		std::string m_nome;
		std::string m_cpf;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;	
};

#endif
