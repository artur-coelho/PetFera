#ifndef _ANFIBIO_EXOTICO_HPP_
#define _ANFIBIO_EXOTICO_HPP_

#include "Anfibio.hpp"
#include "AnimalExotico.hpp"

using std::endl;

class AnfibioExotico : public Anfibio, AnimalExotico {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		AnfibioExotico();
		AnfibioExotico(int id, std::string classe, std::string nome_cientifico, char sexo, 
		 	           double tamanho, std::string dieta, Veterinario* veterinario,
		 	           Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string pais_origem);
		~AnfibioExotico();
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
