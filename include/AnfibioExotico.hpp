#ifndef _ANFIBIO_EXOTICO_HPP_
#define _ANFIBIO_EXOTICO_HPP_

#include "Anfibio.hpp"
#include "AnimalExotico.hpp"

using std::endl;

class AnfibioExotico : public Anfibio, AnimalExotico {
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
					  << "Total de mudas: " << m_total_de_mudas << endl
					  << "Última muda: " << m_ultima_muda << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "País de origem: " << m_pais_origem << endl;
		} 
	public:
		// construtores e destrutores {
		AnfibioExotico();
		AnfibioExotico(int id, std::string classe, std::string nome_cientifico, char sexo, 
		 	           double tamanho, std::string dieta, Veterinario* veterinario,
		 	           Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda,
		 	           std::string autorizacao_ibama, std::string pais_origem);
		~AnfibioExotico();
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
