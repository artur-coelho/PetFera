#include "PetFera.hpp"

int main(){
	Funcionario primeiro_funcionario;
	primeiro_funcionario.set_m_id(5967820);

	Animal primeiro_animal;
	primeiro_animal.set_m_id(111239);;

	PetFera novaLoja;

	novaLoja.cadastrar(primeiro_animal);
	novaLoja.cadastrar(primeiro_funcionario);
	novaLoja.remover(primeiro_animal);
	novaLoja.remover(primeiro_funcionario);

	novaLoja.consultar();
	novaLoja.salvar();
	return 0;
}
