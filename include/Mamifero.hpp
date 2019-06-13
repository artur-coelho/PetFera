#ifndef _MAMIFERO_HPP_
#define _MAMIFERO_HPP_

#include "Animal.hpp"

#include <string>

using std::endl;

class Mamifero : public Animal{
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
					  << "Cor do pelo: " << m_cor_pelo << endl;
		} 
	public:
		// construtores e destrutores {
		Mamifero();
		Mamifero(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();
		// } construtores e destrutores
		
		// getters {
		std::string get_m_cor_pelo(void);
		// } getters

		// setters {
		void set_m_cor_pelo(std::string cor_pelo);
		// } setters

		void imprimeAnimal();

	protected:
		// membros {
		std::string m_cor_pelo;
		// } membros
};

#endif
