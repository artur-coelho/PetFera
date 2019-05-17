#ifndef _ANIMAL_NATIVO_HPP_
#define _ANIMAL_NATIVO_HPP_

#include "AnimalSilvestre.hpp"

#include <string>

class AnimalNativo : public AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalNativo();
		~AnimalNativo();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_uf_origem(void);
		std::string get_m_autorizacao(void)
		// } getters

		// setters {
		void set_m_uf_origem(std::string uf_origem);
		void set_m_autorizacao(std::string autorizacao);
		// } setters

	protected:
		// membros {
		std::string m_uf_origem;
		std::string m_autorizacao;
		// } membros
};

#endif
