#ifndef _MAMIFERO_HPP_
#define _MAMIFERO_HPP_

#include "Animal.hpp"

#include <string>

class Mamifero : public Animal{
	public:
		// construtores e destrutores {
		Mamifero();
		~Mamifero();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_cor_pelo(void);
		// } getters

		// setters {
		void set_m_cor_pelo(std::string cor_pelo);
		// } setters

	protected:
		// membros {
		std::string m_cor_pelo;
		// } membros
};

#endif
