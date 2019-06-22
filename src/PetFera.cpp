#include "PetFera.hpp"

void PetFera::cadastrar(Animal* novo_animal) {
	animais.insert({novo_animal->get_m_id(), novo_animal});
	std::cout << "Animal " << novo_animal->get_m_id() << " cadastrado com sucesso!" << std::endl;
}

void PetFera::cadastrar(Funcionario* novo_funcionario) {
	funcionarios.insert({novo_funcionario->get_m_id(), novo_funcionario});
	std::cout << "Funcionario " << novo_funcionario->get_m_id() << " cadastrado com sucesso!" << std::endl;
}

void PetFera::remover(Animal* animal_eliminado) {
	animais.erase(animal_eliminado->get_m_id());
	std::cout << "Animal " << animal_eliminado->get_m_id() << " removido com sucesso!" << std::endl;
}

void PetFera::remover(Funcionario* funcionario_eliminado) {
	funcionarios.erase(funcionario_eliminado->get_m_id());
	std::cout << "Funcionario " << funcionario_eliminado->get_m_id() << " removido com sucesso!" << std::endl;
}

void PetFera::alterar(int id, char baseDados) {
	if(baseDados == 'f') {
		funcionarios[id]->alterarDado();
	}
	if(baseDados == 'a') {
		animais[id]->alterarDado();
	}
	if(!(baseDados == 'a' || baseDados == 'f')) {
		std::cout << "Error" << std::endl;
	}
}

Funcionario* PetFera::consultarFuncionario(int id) {
	return funcionarios[id];
}

void PetFera::carregar() {
	std::cout << "Carreguei, pode acreditar!" << std::endl;
}

void PetFera::salvar() {
	for (std::map<int, Funcionario*>::iterator it=funcionarios.begin(); it!=funcionarios.end(); ++it) {
		it->second->escreverEmArquivo();
	}
	for (std::map<int, Animal*>::iterator it=animais.begin(); it!=animais.end(); ++it) {
		it->second->escreverEmArquivo();
	}
}
