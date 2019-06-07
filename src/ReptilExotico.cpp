#include "ReptilExotico.hpp"

// construtores e destrutores {
ReptilExotico::ReptilExotico() {}
ReptilExotico::ReptilExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string pais_origem) : 
		 	   Reptil(id, classe, nome_cientifico, sexo, tamanho,dieta, veterinario, tratador, 
		 	   nome_batismo, venenoso,tipo_veneno),
		 	   AnimalExotico(autorizacao_ibama, pais_origem) { }
ReptilExotico::~ReptilExotico() {}
// } construtores e destrutores

// getters {
// } getters

// setters {
// } setters