#ifndef _MAMIFERO_HPP_
#define _MAMIFERO_HPP_

#include "Animal.hpp"

#include <string>

using std::endl;

class Mamifero : public Animal{
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		Mamifero();
		Mamifero(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_cor_pelo(void);
		// } getters

		// setters {
		void set_m_cor_pelo(std::string cor_pelo);
		// } setters

		void imprimeAnimal();

	protected:
		// membros {
		std::string m_cor_pelo;
		// } membros
};

#endif
