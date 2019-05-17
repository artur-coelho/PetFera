#ifndef _AVE_HPP_
#define _AVE_HPP_

#include "Animal.hpp"

class Ave : Animal {
	public:
		// construtores e destrutores {
		Ave();
		~Ave();	
		// } construtores e destrutores
		
		// getters {
		double get_m_tamanho_do_bico_cm(void);
		double get_m_envergadura_das_asas(void);
		// } getters

		// setters {
		void set_m_tamanho_do_bico_cm(double tamanho_do_bico_cm);
		void set_m_envergadura_das_asas(double envergadura_das_asas);
		// } setters

	protected:
		// membros {
		double m_tamanho_do_bico_cm;
		double m_envergadura_das_asas;
		// } membros
};

#endif
