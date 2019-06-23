#include "AveNativo.hpp"

// construtores e destrutores {
AveNativo::AveNativo() {}
AveNativo::AveNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm,
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string uf_origem) :
		 	   Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
		 	   AnimalNativo(autorizacao_ibama, uf_origem) { }
AveNativo::~AveNativo() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters

std::ostream& AveNativo::print(std::ostream& os) const {
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
					  << "Envergadura das asas: " << m_envergadura_das_asas << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "UF de origem: " << m_uf_origem << endl;
}

void AveNativo::escreverEmArquivo(){
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
					<< m_nome_batismo << ";" << std::endl;
	} else {
		std::cerr << "Falha ao escrever em Animais.csv" << std::endl;
	}
}
