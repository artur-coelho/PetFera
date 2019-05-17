#ifndef _TRATADOR_HPP_
#define _TRATADOR_HPP_

#include "Funcionario.hpp"

class Tratador : public Funcionario {
	public:
		// construtores e destrutores {
		Tratador();
		~Tratador();
		// } construtores e destrutores
		
		// getters {
		int get_m_nivel_de_seguranca(void);
		// } getters

		// setters {
		void set_m_nivel_de_seguranca(int nivel_de_seguranca);
		// } setters

	protected:
		// membros {
		int m_nivel_de_seguranca;
		// } membros
};

#endif
