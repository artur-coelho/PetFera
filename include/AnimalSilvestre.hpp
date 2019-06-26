/**
* @file	AnimalSilvestre.hpp
* @brief	Classe que representa os animais silvestres
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANIMAL_SILVESTRE_HPP_
#define _ANIMAL_SILVESTRE_HPP_

#include <string>

class AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalSilvestre();
		AnimalSilvestre(std::string autorizacao_ibama);
		~AnimalSilvestre();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_autorizacao_ibama(void);
		// } getters

		// setters {
		void set_m_autorizacao_ibama(std::string autorizacao_ibama);
		// } setters

	protected:
		// membros {
		std::string m_autorizacao_ibama;	/**< Define a aturização de transporte emitida pelo IBAMA
		// } membros
};

#endif
