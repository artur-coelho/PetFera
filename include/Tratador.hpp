#ifndef _TRATADOR_HPP_
#define _TRATADOR_HPP_

#include "Funcionario.hpp"
using std::endl;

class Tratador : public Funcionario {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		Tratador();
		Tratador(int id, std::string nome, std::string cpf, short idade, 
				std::string tipo_sanguineo, char fator_rh, std::string especialidade,
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
		void imprime_funcionario();

	protected:
		// membros {
		int m_nivel_de_seguranca;
		// } membros
};

#endif
