#ifndef _MAMIFERO_NATIVO_HPP_
#define _MAMIFERO_NATIVO_HPP_

#include "Mamifero.hpp"
#include "AnimalNativo.hpp"

class MamiferoNativo : public Mamifero, AnimalNativo {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		MamiferoNativo();
		MamiferoNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao);
		~MamiferoNativo();
		// } construtores e destrutores
		
		// getters {
		
		// } getters

		// setters {
		
		// } setters

		void imprimeAnimal();

	protected:
		// membros {
		
		// } membros
};

#endif
