#ifndef _ANIMAL_EXOTICO_HPP_
#define _ANIMAL_EXOTICO_HPP_ 

#include "AnimalSilvestre.hpp"

#include <string>

class AnimalExotico : public AnimalSilvestre {
	public:
		// construtores e destrutores {
		AnimalExotico();
		~AnimalExotico();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_pais_origem(void);
		// } getters

		// setters {
		void set_m_pais_origem(std::string pais_origem);
		// } setters

	protected:
		// membros {
		std::string m_pais_origem;
		// } membros
};

#endif