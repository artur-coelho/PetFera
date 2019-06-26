/**
* @file	MamiferoNativo.hpp
* @brief	Classe que representa os mamíferos nativos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

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
		 	   std::string autorizacao_ibama, std::string uf_origem);
		~MamiferoNativo();
		// } construtores e destrutores

		// getters {

		// } getters

		// setters {

		// } setters
		void escreverEmArquivo();

	protected:
		// membros {

		// } membros
};

#endif
