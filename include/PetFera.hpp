#ifndef _PETFERA_HPP_
#define _PETFERA_HPP_

#include "Animal.hpp"
#include "Funcionario.hpp"

#include <map>
#include <iostream>

class PetFera {
	public:
		void cadastrar();
		void remover();
		void alterar();
		void consultar();
		void salvar();
	private:
		std::map<int, Funcionario> funcionarios;
		std::map<int, Animal> animais;
};

#endif

