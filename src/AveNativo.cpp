#include "AveNativo.hpp"

// construtores e destrutores {
AveNativo::AveNativo() {}
AveNativo::AveNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao) :
		 	   Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas), 
		 	   AnimalNativo(autorizacao_ibama, uf_origem, autorizacao) { }
AveNativo::~AveNativo() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters