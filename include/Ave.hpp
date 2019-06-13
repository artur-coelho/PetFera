#ifndef _AVE_HPP_
#define _AVE_HPP_

#include "Animal.hpp"

using std::endl;

class Ave : public Animal {
	private:
		std::ostream& print(std::ostream& os) const {
			return os << "ID: " << m_id << endl
					  << "Classe: " << m_classe << endl
					  << "Nome Científico: " << m_nome_cientifico << endl
					  << "Sexo: " << m_sexo << endl
					  << "Tamanho: " << m_tamanho << endl
					  << "Dieta: " << m_dieta << endl
					  << "Veterinário: " << m_veterinario << endl
					  << "Tratador: " << m_tratador << endl
					  << "Nome de Batismo: " << m_nome_batismo << endl
					  << "Tamanho do bico (cm): " << m_tamanho_do_bico_cm << endl
					  << "Envergadura das asas: " << m_envergadura_das_asas << endl;
		} 
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

		void imprimeAnimal();

	protected:
		// membros {
		double m_tamanho_do_bico_cm;
		double m_envergadura_das_asas;
		// } membros
};

#endif
