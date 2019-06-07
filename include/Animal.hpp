#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include "Veterinario.hpp"
#include "Tratador.hpp"

#include <string>

class Animal {
	public:
		// construtores e destrutores {
		Animal();
		Animal(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo);
		~Animal();
		// } construtores e destrutores
		// getters {
		int get_m_id(void);
		std::string get_m_classe(void);
		std::string get_m_nome_cientifico(void);
		char get_m_sexo(void);
		double get_m_tamanho(void);
		std::string get_m_dieta(void);
		Veterinario get_m_veterinario(void);
		Tratador get_m_tratador(void);
		std::string get_m_nome_batismo(void);
		// } getters

		// setters
		void set_m_id(int id);
		void set_m_classe(std::string classe);
		void set_m_nome_cientifico(std::string nome_cientifico);
		void set_m_sexo(char sexo);
		void set_m_tamanho(double tamanho);
		void set_m_dieta(std::string dieta);
		void set_m_veterinario(Veterinario veterinario);
		void set_m_tratador(Tratador tratador);
		void set_m_nome_batismo(std::string nome_batismo);
		// } setters

	protected:
		// membros {
		int m_id;
		std::string m_classe;
		std::string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		std::string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		std::string m_nome_batismo;
		// } membros
};

#endif
