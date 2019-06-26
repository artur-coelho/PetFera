/**
* @file	AnimalSilvestre.cpp
* @brief	Implementação da classe que representa os animais silvestres
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "AnimalSilvestre.hpp"

/**
* @brief	Construtor padrão da classe AnimalSilvestre
*/
AnimalSilvestre::AnimalSilvestre() { }
/**
* @brief	Construtor parametrizado da classe AnimalSilvestre
*/
AnimalSilvestre::AnimalSilvestre(std::string autorizacao_ibama) :
								m_autorizacao_ibama(autorizacao_ibama) { }
/**
* @brief	Destrutor da classe AnimalSilvestre
*/
AnimalSilvestre::~AnimalSilvestre() { }


// getters {
std::string AnimalSilvestre::get_m_autorizacao_ibama(void) {
	return m_autorizacao_ibama;
}
// } getters

// setters {
void AnimalSilvestre::set_m_autorizacao_ibama(std::string autorizacao_ibama) {
	m_autorizacao_ibama = autorizacao_ibama;
}
// } setters
