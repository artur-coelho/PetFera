/**
* @file	PetFera.hpp
* @brief	Classe que representa o petshop
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _PETFERA_HPP_
#define _PETFERA_HPP_

#include "Funcionario.hpp"
#include "Tratador.hpp"
#include "Veterinario.hpp"

#include "Animal.hpp"
#include "AnimalExotico.hpp"
#include "AnimalNativo.hpp"
#include "AnimalSilvestre.hpp"

#include "Anfibio.hpp"
#include "AnfibioExotico.hpp"
#include "AnfibioNativo.hpp"

#include "Ave.hpp"
#include "AveExotico.hpp"
#include "AveNativo.hpp"

#include "Mamifero.hpp"
#include "MamiferoExotico.hpp"
#include "MamiferoNativo.hpp"

#include "Reptil.hpp"
#include "ReptilExotico.hpp"
#include "ReptilNativo.hpp"

#include <map>
#include <vector>
#include <iostream>
#include <string>

class PetFera {
	public:
		void cadastrar(Animal* novo_animal);
		void cadastrar(Funcionario* novo_funcionario);
		void remover(Animal* animal_eliminado);
		void remover(Funcionario* funcionario_eliminado);
		Funcionario* consultarFuncionario(int id);
		void alterar(int id, char baseDados); // baseDados: (f)uncionarios (a)nimais
		void carregar();
		void salvar();
	private:
		std::map<int, Funcionario*> funcionarios;	/**< Define um container que irá armazenar ponteiros para funcionários */
		std::map<int, Animal*> animais;	/**< Define um container que irá armazenar ponteiros para animais */
};

#endif