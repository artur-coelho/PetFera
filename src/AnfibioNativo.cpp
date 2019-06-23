#include "AnfibioNativo.hpp"

// construtores e destrutores {
AnfibioNativo::AnfibioNativo() {}
AnfibioNativo::AnfibioNativo(int id, std::string classe, std::string nome_cientifico, char sexo,
		 	           double tamanho, std::string dieta, Veterinario* veterinario,
		 	           Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string uf_origem) :
		 	           Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
			   		   tratador, nome_batismo, total_de_mudas, ultima_muda),
			   		   AnimalNativo(autorizacao_ibama, uf_origem) { }
AnfibioNativo::~AnfibioNativo() {}
// } construtores e destrutores

std::ostream& AnfibioNativo::print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Total de mudas: " << m_total_de_mudas << endl
					  << "Última muda: " << m_ultima_muda << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "UF de origem: " << m_uf_origem << endl;
}

void AnfibioNativo::escreverEmArquivo(){
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
