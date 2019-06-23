#include "Ave.hpp"

// construtores e destrutores {
Ave::Ave() {}
Ave::Ave(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm,
		 	   double envergadura_das_asas) :
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_tamanho_do_bico_cm(tamanho_do_bico_cm),
		 	   m_envergadura_das_asas(envergadura_das_asas) { }

Ave::~Ave() {}
// } construtores e destrutores

// getters {
double Ave::get_m_tamanho_do_bico_cm(void) {
	return m_tamanho_do_bico_cm;
}

double Ave::get_m_envergadura_das_asas(void) {
	return m_envergadura_das_asas;
}
// } getters

// setters {
void Ave::set_m_tamanho_do_bico_cm(double tamanho_do_bico_cm) {
	m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}

void Ave::set_m_envergadura_das_asas(double envergadura_das_asas) {
	m_envergadura_das_asas = envergadura_das_asas;
}
// } setters

std::ostream& Ave::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Tamanho do bico (cm): " << m_tamanho_do_bico_cm << endl
					  << "Envergadura das asas: " << m_envergadura_das_asas << endl;
}

void Ave::escreverEmArquivo(){
	std::ofstream arquivo ("Animais.csv");
	if (arquivo) {
		arquivo.seekp (0, arquivo.end);
		arquivo
		 			<< m_id << ";"
					<< m_classe << ";"
					<< m_nome_cientifico << ";"
					<< m_sexo << ";"
					<< m_tamanho << ";"
					<< m_dieta << ";"
					<< m_veterinario->get_m_id() << ";"
					<< m_tratador->get_m_id() << ";"
					<< m_nome_batismo << ";"
					<< m_tamanho_do_bico_cm << ";"
					<< m_envergadura_das_asas << ";"
					<< std::endl;
	} else {
		std::cerr << "Falha ao escrever em Animais.csv" << std::endl;
	}
}

void Ave::alterarDado(){
	std::cout << "Pegadinha do malandro" << std::endl;
	return;
}
