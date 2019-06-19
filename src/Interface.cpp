#include "Interface.hpp"

void Interface::boasVindas() {
	std::cout << "Bem vindo ao PetFera do grupo Dolinho!" << std::endl;
	menu();
}

void Interface::optInvalida() {
	std::cout << "Opcao invalida!" << std::endl;
}

void Interface::menu() {
	char opt;
	std::cout <<
	"Menu:" << std::endl <<
	"0 - Sair" << std::endl <<
	"1 - Voltar" << std::endl <<
	"2 - Cadastrar" << std::endl <<
	"3 - Remover" << std::endl <<
	"4 - Alterar" << std::endl <<
	"5 - Consultar" << std::endl <<
	"> ";
	std::cin >> opt;
	switch(opt) {
		case '0':
			sair();
			break;
		case '1':
			std::cout << "Voce nao pode voltar mais!" << std::endl;
			menu();
			break;
		case '2':
			cadastrar();
			break;
		case '3':
			remover();
			break;
		case '4':
			alterar();
			break;
		case '5':
			consultar();
			break;
		default:
			optInvalida();
			menu();
	}
}

void Interface::cadastrar() {
	char opt;
	std::cout <<
	"Tela de Cadastro:" << std::endl << 
	"0 - Sair" << std::endl <<
	"1 - Voltar" << std::endl <<
	"2 - Funcionario" << std::endl <<
	"3 - Animal" << std::endl <<
	"> ";
	std::cin >> opt;
	switch(opt) {
		case '0':
			sair();
			break;
		case '1':
			menu();
			break;
		case '2':
			break;
		case '3':
			break;
		default:
			optInvalida();
			cadastrar();
	}
}

void Interface::remover() {
	char opt;
	std::cout <<
	"Tela de remocao:" << std::endl <<
	"0 - Sair" << std::endl <<
	"1 - Voltar" << std::endl <<
	"2 - Funcionario" << std::endl <<
	"3 - Animal" << std::endl <<
	"> ";
	std::cin >> opt;
	switch(opt) {
		case '0':
			sair();
			break;
		case '1':
			menu();
			break;
		case '2':
			break;
		case '3':
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::alterar() {
	char opt;
	std::cout <<
	"Tela de alteracao:" << std::endl << 
	"0 - Sair" << std::endl <<
	"1 - Voltar" << std::endl <<
	"2 - Funcionario" << std::endl <<
	"3 - Animal" << std::endl <<
	"> ";
	std::cin >> opt;
	switch(opt) {
		case '0':
			sair();
			break;
		case '1':
			menu();
			break;
		case '2':
			break;
		case '3':
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::consultar() {
	char opt;
	std::cout <<
	"Tela de consulta:" << std::endl << 
	"0 - Sair" << std::endl <<
	"1 - Voltar" << std::endl <<
	"2 - Funcionario" << std::endl <<
	"3 - Animal" << std::endl <<
	"> ";
	std::cin >> opt;
	switch(opt) {
		case '0':
			sair();
			break;
		case '1':
			menu();
			break;
		case '2':
			break;
		case '3':
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::sair() {
	std::cout << "Obrigado e volte sempre!" << std::endl;
}