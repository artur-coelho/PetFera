#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <string>
#include "Veterinario.hpp"
#include "Tratador.hpp"

class Animal{
	public:
		int get_m_id(void);
		std::string get_m_classe(void);
		std::string get_m_nome_cientifico(void);
		char get_m_sexo(void);
		double get_m_tamanho(void);
		std::string get_m_dieta(void);
		Veterinario get_m_veterinario(void);
		Tratador get_m_tratador(void);
		std::string get_m_nome_batismo(void);

	protected:
		int m_id;
		std::string m_classe;
		std::string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		std::string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		std::string m_nome_batismo;
};

#endif
