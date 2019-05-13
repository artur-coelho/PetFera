#ifndef _TRATADOR_HPP
#define _TRATADOR_HPP

#include <iostream>
#include "Funcionario.hpp"
#include "Animal.hpp"

class Tratador
{
private:
	int m_nivel_de_seguranca;
public:
	int get_m_nivel_de_seguranca();
	void set_m_nivel_de_seguranca(int niv);
	
	Tratador();
	~Tratador();	
};
#endif