/**
* @file	Interface.hpp
* @brief	Classe que representa a interface do projeto
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

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