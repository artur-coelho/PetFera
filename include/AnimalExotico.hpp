/**
* @file	AnimalExotico.hpp
* @brief	Classe que representa os animais exoticos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANIMAL_EXOTICO_HPP_
#define _ANIMAL_EXOTICO_HPP_ 

#include "AnimalSilvestre.hpp"

#include <string>

class AnimalExotico : public AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalExotico();
		AnimalExotico(std::string autorizacao_ibama, std::string pais_origem);
		~AnimalExotico();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_pais_origem(void);
		// } getters

		// setters {
		void set_m_pais_origem(std::string pais_origem);
		// } setters

	protected:
		// membros {
		std::string m_pais_origem;	/**< Define o país de origem do animal exótico */
		// } membros
};

#endif
