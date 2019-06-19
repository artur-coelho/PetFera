#include "Interface.hpp"

void Interface::boasVindas() {
	loja.carregar();
	std::cout << std::endl << "Bem vindo ao PetFera do grupo Dolinho!" << std::endl;
	menu();
}

void Interface::optInvalida() {
	std::cout << "Opcao invalida!" << std::endl;
}

void Interface::menu() {
	char opt;
	std::cout <<
	std::endl <<
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
	std::endl <<
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
			cadastrarFuncionario();
			break;
		case '3':
			cadastrarAnimal();
			break;
		default:
			optInvalida();
			cadastrar();
	}
}

void Interface::remover() {
	char opt;
	std::cout <<
	std::endl <<
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
			removerFuncionario();
			break;
		case '3':
			removerAnimal();
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::alterar() {
	char opt;
	std::cout <<
	std::endl <<
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
			alterarFuncionario();
			break;
		case '3':
			alterarAnimal();
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::consultar() {
	char opt;
	std::cout <<
	std::endl <<
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
			consultarFuncionario();
			break;
		case '3':
			consultarAnimal();
			break;
		default:
			optInvalida();
			remover();
	}
}

void Interface::sair() {
	loja.salvar();
	std::cout << std::endl << "Obrigado e volte sempre!" << std::endl;
}

void Interface::cadastrarFuncionario() {
	Funcionario* novoFuncionario;
	int id;
	std::string nome;
	std::string cpf;
	short idade;
	std::string tipoSanguineo;
	char fatorRh;
	std::string especialidade;
	std::string CRMV;
	int nivelSeguranca;
	char opt;
	std::cout <<
	std::endl <<
	"Cadastro de Funcionario:" << std::endl << 
	"O novo funcionario eh um (v)eterinario ou um (t)ratador?" << std::endl <<
	"> ";
	cin >> opt;
	switch(opt) {
		case 'v':
			std::cout << 
			"Qual o CRMV do veterinario?" << std::endl << "> ";
			cin >> CRMV;
			break;
		case 't':
			std::cout <<
			"Qual o nivel de seguranca do tratador?" << std::endl << "> ";
			cin >> nivelSeguranca;
			break;
		default:
			optInvalida();
			cadastrarFuncionario();
	}
	std::cout << "Qual o ID do novo funcionario?" << std::endl << "> ";
	cin >> id;
	std::cout << "Qual o nome do novo funcionario?" << std::endl << "> ";
	cin >> nome;
	std::cout << "Qual o CPF do novo funcionario?" << std::endl << "> ";
	cin >> cpf;
	std::cout << "Qual a idade do novo funcionario?" << std::endl << "> ";
	cin >> idade;
	std::cout << "Qual o tipo sanguinio do novo funcionario?" << std::endl << "> ";
	cin >> tipoSanguineo;
	std::cout << "Qual o fator Rh do novo funcionario?" << std::endl << "> ";
	cin >> fatorRh;
	std::cout << "Qual eh a especialidade do novo funcionario?" << std::endl << "> ";
	cin >> especialidade;
	if(opt == 'v') {
		novoFuncionario = new Veterinario(id, nome, cpf, idade, tipoSanguineo, fatorRh, especialidade, CRMV);
	}
	if(opt == 't') {
		novoFuncionario = new Tratador(id, nome, cpf, idade, tipoSanguineo, fatorRh, especialidade, nivelSeguranca);
	}
	loja.cadastrar(novoFuncionario);
}

void Interface::cadastrarAnimal() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::removerFuncionario() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::removerAnimal() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::alterarFuncionario() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::alterarAnimal() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::consultarFuncionario() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}

void Interface::consultarAnimal() {
	std::cout << "Ainda nao tenho nada" << std::endl;
}
