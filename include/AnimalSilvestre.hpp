#ifndef _ANIMAL_SILVESTRE_HPP_
#define _ANIMAL_SILVESTRE_HPP_

#include <string>

class AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalSilvestre();
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
		std::string m_autorizacao_ibama;
		// } membros
};

#endif
