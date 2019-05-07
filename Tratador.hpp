#ifndef _TRATADOR_HPP
#define _TRATADOR_HPP

#include <iostream>
#include "Funcionario.hpp"
#include "Animal.hpp"

class Tratador
{
private:
	int m_nivel_de_segurança;
public:
	int get_m_nivel_de_segurança();
	Tratador();
	~Tratador();	
}
#endif