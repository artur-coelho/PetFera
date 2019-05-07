#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <string>

class Funcionario{
	public:
		int get_m_id(void);
		string get_m_nome(void);
		string get_m_cpf(void);
		short get_m_idade(void);
		short get_m_tipo_sanguineo(void);
		char get_m_fator_rh(void);
		string get_m_especialidade(void);	

	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade;	
};

#endif
