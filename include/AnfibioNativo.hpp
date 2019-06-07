#ifndef _ANFIBIO_NATIVO_HPP_
#define _ANFIBIO_NATIVO_HPP_

#include "Anfibio.hpp"
#include "AnimalNativo.hpp"

class AnfibioNativo : public Anfibio, AnimalNativo {
	public:
		// construtores e destrutores {
		AnfibioNativo();
		AnfibioNativo(int id, std::string classe, std::string nome_cientifico, char sexo, 
		 	           double tamanho, std::string dieta, Veterinario veterinario,
		 	           Tratador tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao);
		~AnfibioNativo();
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
