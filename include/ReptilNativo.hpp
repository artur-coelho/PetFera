#ifndef _REPTIL_NATIVO_HPP_
#define _REPTIL_NATIVO_HPP_

#include "Reptil.hpp"
#include "AnimalNativo.hpp"

class ReptilNativo : public Reptil, AnimalNativo {
	public:
		// construtores e destrutores {
		ReptilNativo();
		ReptilNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao);
		~ReptilNativo();	
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
