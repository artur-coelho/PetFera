#ifndef _AVE_EXOTICO_HPP_
#define _AVE_EXOTICO_HPP_

#include "Ave.hpp"
#include "AnimalExotico.hpp"

class AveExotico : public Ave, AnimalExotico {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		AveExotico();
		AveExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string pais_origem);
		~AveExotico();
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
