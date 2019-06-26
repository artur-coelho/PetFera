/**
* @file	AnimalNativo.hpp
* @brief	Classe que representa os animais nativos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANIMAL_NATIVO_HPP_
#define _ANIMAL_NATIVO_HPP_

#include "AnimalSilvestre.hpp"

#include <string>

class AnimalNativo : public AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalNativo();
		AnimalNativo(std::string autorizacao_ibama, std::string uf_origem);
		~AnimalNativo();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_uf_origem(void);
		// } getters

		// setters {
		void set_m_uf_origem(std::string uf_origem);
		// } setters

	protected:
		// membros {
		std::string m_uf_origem;	/**< Define a uf de origem do animal */
		// } membros
};

#endif
