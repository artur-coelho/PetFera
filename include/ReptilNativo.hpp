/**
* @file	RepitlNativo.hpp
* @brief	Classe que representa os répteis nativos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _REPTIL_NATIVO_HPP_
#define _REPTIL_NATIVO_HPP_

#include "Reptil.hpp"
#include "AnimalNativo.hpp"

class ReptilNativo : public Reptil, AnimalNativo {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		ReptilNativo();
		ReptilNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string uf_origem);
		~ReptilNativo();
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
