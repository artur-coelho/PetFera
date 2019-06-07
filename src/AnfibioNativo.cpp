#include "AnfibioNativo.hpp"

// construtores e destrutores {
AnfibioNativo::AnfibioNativo() {}
AnfibioNativo::AnfibioNativo(int id, std::string classe, std::string nome_cientifico, char sexo, 
		 	           double tamanho, std::string dieta, Veterinario veterinario,
		 	           Tratador tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao) : 
		 	           Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
			   		   tratador, nome_batismo, total_de_mudas, ultima_muda),
			   		   AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) { }
AnfibioNativo::~AnfibioNativo() {}
// } construtores e destrutores
