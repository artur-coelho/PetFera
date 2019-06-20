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
	std::cin >> opt;
	switch(opt) {
		case 'v':
			std::cout << 
			"Qual o CRMV do veterinario?" << std::endl << "> ";
			std::cin >> CRMV;
			break;
		case 't':
			std::cout <<
			"Qual o nivel de seguranca do tratador?" << std::endl << "> ";
			std::cin >> nivelSeguranca;
			break;
		default:
			optInvalida();
			cadastrarFuncionario();
	}
	std::cout << "Qual o ID do novo funcionario?" << std::endl << "> ";
	std::cin >> id;
	std::cout << "Qual o nome do novo funcionario?" << std::endl << "> ";
	std::cin >> nome;
	std::cout << "Qual o CPF do novo funcionario?" << std::endl << "> ";
	std::cin >> cpf;
	std::cout << "Qual a idade do novo funcionario?" << std::endl << "> ";
	std::cin >> idade;
	std::cout << "Qual o tipo sanguinio do novo funcionario?" << std::endl << "> ";
	std::cin >> tipoSanguineo;
	std::cout << "Qual o fator Rh do novo funcionario?" << std::endl << "> ";
	std::cin >> fatorRh;
	std::cout << "Qual eh a especialidade do novo funcionario?" << std::endl << "> ";
	std::cin >> especialidade;
	if(opt == 'v') {
		novoFuncionario = new Veterinario(id, nome, cpf, idade, tipoSanguineo, fatorRh, especialidade, CRMV);
	}
	if(opt == 't') {
		novoFuncionario = new Tratador(id, nome, cpf, idade, tipoSanguineo, fatorRh, especialidade, nivelSeguranca);
	}
	loja.cadastrar(novoFuncionario);
}

void Interface::cadastrarAnimal() {
	Animal* novoAnimal;
	char anf_mam_rep_ave, nativo_exotico, silvestre_domestico;
	int id;
	std::string classe;
	std::string nomeCientifico;
	char sexo;
	double tamanho;
	std::string dieta;
	Veterinario veterinario; // Temporariamente
	Tratador tratador; // Temporariamente
	std::string nomeBatismo;
	std::string autorizacaoIbama;
	std::string ufOrigem;
	std::string paisOrigem;
	std::string cidadeOrigem;
	int totalMudas;
	Date ultimaMuda; // temporariamente
	std::string corPelo;
	bool venenoso;
	std::string tipoVeneno;
	double tamanhoBicoCm;
	double envergaduraAsas;
	std::cout <<
	std::endl <<
	"Cadastro de Animal:" << std::endl;
	std::cout << "Qual o ID do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> id;
	std::cout << "Qual a classe do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> classe;
	std::cout << "Qual o nome cientifico do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> nomeCientifico;
	std::cout << "Qual o sexo do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> sexo;
	std::cout << "Qual o tamanho do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> tamanho;
	std::cout << "Qual a dieta do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> dieta;
	std::cout << "Qual o veterinario do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> Veterinario; // Temporariamente
	std::cout << "Qual o tratador do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> Tratador; // Temporariamente
	std::cout << "Qual o nome de batismo do animal que estamos cadastrando?" std::endl << "> ";
	std::cin >> nomeBatismo;
	std::cout << "O animal eh um (a)nfibio, (m)amifero, (r)eptil ou a(v)e?" << std::endl << "> ";
	std::cin >> anf_mam_rep_ave;
	switch(anf_mam_rep_ave) {
		case 'a':
			std::cout << "Qual o total mudas do anfibio em questao?" << std::endl << "> ";
			std::cin >> totalMudas;
			std::cout << "Qual a ultima muda do anfibio em questao?" << std::endl << "> ";
			std::cin >> ultimaMuda;
			break;
		case 'm':
			std::cout << "Qual o cor do pelo do mamifero em questao?" << std::endl << "> ";
			std::cin >> corPelo;
			break;
		case 'r':
			std::cout << "Esse reptil eh venenoso?" << std::endl << "> ";
			std::cin >> venenoso;
			std::cout << "Qual o tipo de veneno desse reptil?" << std::endl << "> ";
			std::cin >> tipoVeneno;
			break;
		case 'v':
			std::cout << "Qual o tamanho do bico dessa ave (em centimetros)?" << std::endl << "> ";
			std::cin >> tamanhoBicoCm;
			std::cout << "Qual o envergadura das asas dessa ave?" << std::endl << "> ";
			std::cin >> envergaduraAsas;
			break;
		default:
	}
	std::cout << "Esse animal eh (s)ilvestre ou (d)omestico?" << std::endl <<
	"> ";
	std::cin >> silvestre_domestico;
	switch(silvestre_domestico) {
		case 's':
			std::cout << "Qual a autorizacao do Ibama para o animal silvestre em questao?" << std::endl << "> ";
			std::cin >> autorizacaoIbama;
			std::cout << "Estamos tratando de um animal (n)ativo ou (e)xotico?" << std::endl << "> ";
			std::cin >> nativo_exotico;
			switch(nativo_exotico) {
				case 'n':
					std::cout << "Qual a UF do animal?" << std::endl << "> ";
					std::cin >> ufOrigem;
					break;
				case 'e':
					std::cout << "Qual o pais de origem do animal?" << std::endl << "> ";
					std::cin >> paisOrigem;
					std::cout << "O animal eh um (a)nfibio, (m)amifero, (r)eptil ou a(v)e?" << std::endl << "> ";
					std::cin >> anf_mam_rep_ave;
					break;
				default:

			}
			break;
		case 'd':
			break;
		default:
	}
	loja.cadastrar(novoAnimal);
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
