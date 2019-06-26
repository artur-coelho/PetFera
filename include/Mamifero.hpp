/**
* @file	Mamifero.hpp
* @brief	Classe que representa os mamíferos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

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

		void escreverEmArquivo();
		void alterarDado();

	protected:
		// membros {
		std::string m_cor_pelo;	/**< Define a cor do pelo do mamífero */
		// } membros
};

#endif
