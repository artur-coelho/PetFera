#ifndef _INTERFACE_HPP_
#define _INTERFACE_HPP_

#include "PetFera.hpp"

class Interface {
	public:
		void boasVindas();
		void optInvalida();
		void menu();
		void cadastrar();
		void remover();
		void alterar();
		void consultar();
		void sair();
		void cadastrarFuncionario();
		void cadastrarAnimal();
		void removerFuncionario();
		void removerAnimal();
		void alterarFuncionario();
		void alterarAnimal();
		void consultarFuncionario();
		void consultarAnimal();
	private:
		PetFera loja;
};

#endif