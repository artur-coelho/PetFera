#include "AnfibioExotico.hpp"

// construtores e destrutores {
AnfibioExotico::AnfibioExotico() {}
AnfibioExotico::AnfibioExotico(int id, std::string classe, std::string nome_cientifico, char sexo, 
		 	   double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	   std::string autorizacao_ibama, std::string pais_origem) :
			   Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
			   tratador, nome_batismo, total_de_mudas, ultima_muda), 
			   AnimalExotico(autorizacao_ibama, pais_origem) { }
AnfibioExotico::~AnfibioExotico() {}
// } construtores e destrutores