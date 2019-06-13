#ifndef _AVE_EXOTICO_HPP_
#define _AVE_EXOTICO_HPP_

#include "Ave.hpp"
#include "AnimalExotico.hpp"

class AveExotico : public Ave, AnimalExotico {
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
					  << "Envergadura das asas: " << m_envergadura_das_asas << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "País de origem: " << m_pais_origem << endl;
		}
	public:
		// construtores e destrutores {
		AveExotico();
		AveExotico(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas, std::string autorizacao_ibama, std::string pais_origem);
		~AveExotico();
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
