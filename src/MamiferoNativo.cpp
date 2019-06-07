#include "MamiferoNativo.hpp"

// construtores e destrutores {
MamiferoNativo::MamiferoNativo() {}
MamiferoNativo::MamiferoNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao) :
		 	   Mamifero(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, cor_pelo),
		 	   AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) { }
MamiferoNativo::~MamiferoNativo() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters
