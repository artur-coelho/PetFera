/**
* @file	Repitl.hpp
* @brief	Classe que representa os répteis
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _REPTIL_HPP_
#define _REPTIL_HPP_

#include "Animal.hpp"

using std::endl;

class Reptil : public Animal {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		Reptil();
		Reptil(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno);
		~Reptil();
		// } construtores e destrutores
		
		// getters {
		bool get_m_venenoso(void);
		std::string get_m_tipo_veneno(void);
		// } getters

		// setters {
		void set_m_venenoso(bool venenoso);
		void set_m_tipo_veneno(std::string tipo_veneno);
		// } setters

		void escreverEmArquivo();
		void alterarDado();

	protected:
		// membros {
		bool m_venenoso;	/**< Define se o animal é venenoso ou não */
		std::string m_tipo_veneno;	/**< Define o tipo do veneno do animal */
		// } membros
};

#endif
