#ifndef _VETERINARIO_HPP
#define _VETERINARIO_HPP

#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Animal.hpp"

class Veterinario
{
private:
	std::string m_crmv;
public:
	std::string get_m_crmv();
	void set_m_crmv(std::string crmv);
	Veterinario();
	~Veterinario();	
};
#endif