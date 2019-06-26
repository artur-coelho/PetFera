/**
* @file	Ave.hpp
* @brief	Classe que representa as aves
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _AVE_HPP_
#define _AVE_HPP_

#include "Animal.hpp"

using std::endl;

class Ave : public Animal {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		Ave();
		Ave(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas);
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

		void escreverEmArquivo();
		void alterarDado();


	protected:
		// membros {
		double m_tamanho_do_bico_cm;	/**< Define o tamanho do bico da ave em centímetros */
		double m_envergadura_das_asas;	/**< Define o tamanho da envergadura das asas */
		// } membros
};

#endif
