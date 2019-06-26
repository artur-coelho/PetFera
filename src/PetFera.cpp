/**
* @file	PetFera.cpp
* @brief	Implementação da classe que representa o petshop
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "PetFera.hpp"

/**
* @brief	Insere um ponteiro para animal container usado para armazenar os animais
* @param[in]	novo_animal Ponteiro para novo animal que será cadastrado 	
*/
void PetFera::cadastrar(Animal* novo_animal) {
	animais.insert({novo_animal->get_m_id(), novo_animal});
	std::cout << "Animal " << novo_animal->get_m_id() << " cadastrado com sucesso!" << std::endl;
}

/**
* @brief	Insere um ponteiro para funcionário no container usado para armazenar os funcionários
* @param[in]	novo_funcionario Ponteiro para novo funcionario que será cadastrado 	
*/
void PetFera::cadastrar(Funcionario* novo_funcionario) {
	funcionarios.insert({novo_funcionario->get_m_id(), novo_funcionario});
	std::cout << "Funcionario " << novo_funcionario->get_m_id() << " cadastrado com sucesso!" << std::endl;
}

/**
* @brief	Remove o animal informado do container de animais
* @param[in]	animal_eliminado Ponteiro para o animal que será apagado 	
*/
void PetFera::remover(Animal* animal_eliminado) {
	animais.erase(animal_eliminado->get_m_id());
	std::cout << "Animal " << animal_eliminado->get_m_id() << " removido com sucesso!" << std::endl;
}

/**
* @brief	Remove o funcionário informado do container de funcionários
* @param[in]	funcionário_eliminado Ponteiro para o funcionário que será apagado 	
*/
void PetFera::remover(Funcionario* funcionario_eliminado) {
	funcionarios.erase(funcionario_eliminado->get_m_id());
	std::cout << "Funcionario " << funcionario_eliminado->get_m_id() << " removido com sucesso!" << std::endl;
}

/**
* @brief	Chama o método que irá alterar os dados de um funcionário ou animal, de acordo com seu ID
* @param[in]	id Identificador do funcionário ou animal que será alterado
* @param[in]	baseDados Caractere que irá informar se o objeto a ser alterado é um funcionário(f) ou animal(a) 	
*/
void PetFera::alterar(int id, char baseDados) {
	if(baseDados == 'f') {
		//funcionarios[id]->alterarDado();
	}
	if(baseDados == 'a') {
		//animais[id]->alterarDado();
	}
	if(!(baseDados == 'a' || baseDados == 'f')) {
		std::cout << "Error" << std::endl;
	}
}

/**
* @brief	Retorna um ponteiro para um funcionário que pode ser acessado
* @param[in]	id Identificador do funcionário que será acessado
* @return	Um ponteiro para o funcionário cujo id foi passado 	
*/
Funcionario* PetFera::consultarFuncionario(int id) {
	return funcionarios[id];
}

/**
* @brief	Carrega os dados da loja 	
*/
void PetFera::carregar() {
	std::cout << "Carreguei, pode acreditar!" << std::endl;
}

/**
* @brief	Percorre os containers que contém os funcionários e animais e imprime eles nos respectivos arquivos
*/
void PetFera::salvar() {
	for (std::map<int, Funcionario*>::iterator it=funcionarios.begin(); it!=funcionarios.end(); ++it) {
		it->second->escreverEmArquivo();
	}
	for (std::map<int, Animal*>::iterator it=animais.begin(); it!=animais.end(); ++it) {
		it->second->escreverEmArquivo();
	}
}
