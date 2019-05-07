#ifndef _VETERINARIO_HPP
#define _VETERINARIO_HPP

#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Animal.hpp"

class Veterinario
{
private:
	string m_crmv;
public:
	Veterinario();
	~Veterinario();	
}
#endif