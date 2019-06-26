/**
* @file	AnimalNativo.cpp
* @brief	Implementação da classe que representa os animais nativos
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "AnimalNativo.hpp"

/**
* @brief	Construtor padrão da classe AnimalNativo
*/
AnimalNativo::AnimalNativo() { }
/**
* @brief	Construtor parametrizado da classe AnimalNativo
*/
AnimalNativo::AnimalNativo(std::string autorizacao_ibama, std::string uf_origem) :
						  AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem) { }
/**
* @brief	Destrutor da classe AnimalNativo
*/
AnimalNativo::~AnimalNativo() { }


// getters {
std::string AnimalNativo::get_m_uf_origem(void) {
 return m_uf_origem;
}
// } getters

// setters {
void AnimalNativo::set_m_uf_origem(std::string uf_origem) {
	m_uf_origem = uf_origem;
}
// } setters
