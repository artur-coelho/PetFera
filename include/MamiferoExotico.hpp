#ifndef _MAMIFERO_EXOTICO_HPP_
#define _MAMIFERO_EXOTICO_HPP_

#include "Mamifero.hpp"
#include "AnimalExotico.hpp"

class MamiferoExotico : public Mamifero, AnimalExotico {
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
					  << "Cor do pelo: " << m_cor_pelo << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "País de origem: " << m_pais_origem << endl;
		} 
	public:
		// construtores e destrutores {
		MamiferoExotico();
		MamiferoExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, std::string cor_pelo,
		 	   std::string autorizacao_ibama, std::string pais_origem);
		~MamiferoExotico();
		// } construtores e destrutores
		
		// getters {
		
		// } getters

		// setters {
		
		// } setters

		void imprimeAnimal();

	protected:
		// membros {
		
		// } membros
};

#endif
