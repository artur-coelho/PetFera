#ifndef _MAMIFERO_EXOTICO_HPP_
#define _MAMIFERO_EXOTICO_HPP_

#include "Mamifero.hpp"
#include "AnimalExotico.hpp"

class MamiferoExotico : public Mamifero, AnimalExotico {
	public:
		// construtores e destrutores {
		MamiferoExotico();
		MamiferoExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string pais_origem);
		~MamiferoExotico();
		// } construtores e destrutores
		
		// getters {
		
		// } getters

		// setters {
		
		// } setters

	protected:
		// membros {
		
		// } membros
};

#endif
