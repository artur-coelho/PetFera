#ifndef _REPTIL_EXOTICO_HPP_
#define _REPTIL_EXOTICO_HPP_

#include "Reptil.hpp"
#include "AnimalExotico.hpp"

class ReptilExotico : public Reptil, AnimalExotico {
	public:
		// construtores e destrutores {
		ReptilExotico();
		ReptilExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string pais_origem);
		~ReptilExotico();
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
