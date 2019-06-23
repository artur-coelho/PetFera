#ifndef _AVE_NATIVO_HPP_
#define _AVE_NATIVO_HPP_

#include "Ave.hpp"
#include "AnimalNativo.hpp"

class AveNativo : public Ave, AnimalNativo {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		AveNativo();
		AveNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm,
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string uf_origem);
		~AveNativo();
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
