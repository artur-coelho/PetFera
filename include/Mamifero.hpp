#ifndef _MAMIFERO_HPP_
#define _MAMIFERO_HPP_

#include "Animal.hpp"

#include <string>

class Mamifero : public Animal{
	public:
		// construtores e destrutores {
		Mamifero();
		Mamifero(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_cor_pelo(void);
		// } getters

		// setters {
		void set_m_cor_pelo(std::string cor_pelo);
		// } setters

	protected:
		// membros {
		std::string m_cor_pelo;
		// } membros
};

#endif
