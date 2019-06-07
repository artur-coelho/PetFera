#ifndef _REPTIL_HPP_
#define _REPTIL_HPP_

#include "Animal.hpp"

class Reptil : Animal {
	public:
		// construtores e destrutores {
		Reptil();
		Reptil(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno);
		~Reptil();
		// } construtores e destrutores
		
		// getters {
		bool get_m_venenoso(void);
		std::string get_m_tipo_veneno(void);
		// } getters

		// setters {
		void set_m_venenoso(bool venenoso);
		void set_m_tipo_veneno(std::string tipo_veneno);
		// } setters

	protected:
		// membros {
		bool m_venenoso;
		std::string m_tipo_veneno;
		// } membros
};

#endif
