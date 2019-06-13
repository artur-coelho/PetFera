#ifndef _REPTIL_HPP_
#define _REPTIL_HPP_

#include "Animal.hpp"

using std::endl;

class Reptil : public Animal {
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
					  << "Venenoso: " << m_venenoso << endl
					  << "Tipo do veneno: " << m_tipo_veneno << endl;
		} 
	public:
		// construtores e destrutores {
		Reptil();
		Reptil(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno);
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

		void imprimeAnimal();

	protected:
		// membros {
		bool m_venenoso;
		std::string m_tipo_veneno;
		// } membros
};

#endif
