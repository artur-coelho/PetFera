#ifndef _ANFIBIO_HPP_
#define _ANFIBIO_HPP__

#include "Animal.hpp"
#include "Tempo.hpp"

class Anfibio : Animal {
	public:
		// construtores e destrutores {
		Anfibio();
		~Anfibio();
		// } construtores e destrutores
		
		// getters {
		int get_m_total_de_mudas(void);
		date get_ultima_muda(void);
		// } getters

		// setters {
		void set_m_total_de_mudas(int total_de_mudas);
		void set_m_ultima_muda(date ultima_muda);
		// } setters

	protected:
		// membros {
		int m_total_de_mudas;
		date m_ultima_muda;
		// } membros
};

#endif
