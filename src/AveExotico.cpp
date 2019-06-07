#include "AveExotico.hpp"

// construtores e destrutores {
AveExotico::AveExotico() {}
AveExotico::AveExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string pais_origem) :
		 	   Ave(id, classe, nome_cientifico,	sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
AveExotico::~AveExotico() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters
