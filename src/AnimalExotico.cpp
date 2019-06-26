/**
* @file	AnimalExotico.cpp
* @brief	Implementação da classe que representa os animais exoticos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/


#include "AnimalExotico.hpp"

/**
* @brief	Construtor padrão da classe AnimalExotico
*/
AnimalExotico::AnimalExotico() { }
/**
* @brief	Construtor parametrizado da classe AnimalExotico
*/
AnimalExotico::AnimalExotico(std::string autorizacao_ibama, std::string pais_origem) :
							AnimalSilvestre(autorizacao_ibama), m_pais_origem(pais_origem) { }
/**
* @brief	Destrutor da classe AnimalExotico
*/
AnimalExotico::~AnimalExotico() { }
// } construtores e destrutores

// getters {
std::string AnimalExotico::get_m_pais_origem(void) {
	return m_pais_origem;
}
// } getters

// setters {
void AnimalExotico::set_m_pais_origem(std::string pais_origem) {
	m_pais_origem = pais_origem;
}
// } setters

