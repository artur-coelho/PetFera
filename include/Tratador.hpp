#ifndef _TRATADOR_HPP_
#define _TRATADOR_HPP_

#include "Funcionario.hpp"

class Tratador : public Funcionario {
	public:
		// construtores e destrutores {
		Tratador();
		Tratador(int id, std::string nome, std::string cpf, short idade, 
				short tipo_sanguineo, char fator_rh, std::string especialidade,
				int nivel_de_seguranca);
		~Tratador();
		// } construtores e destrutores
		
		// getters {
		int get_m_nivel_de_seguranca(void);
		// } getters

		// setters {
		void set_m_nivel_de_seguranca(int nivel_de_seguranca);
		// } setters

		void escreverEmArquivo();
		void alterarDado();

	protected:
		// membros {
		int m_nivel_de_seguranca;
		// } membros
};

#endif
