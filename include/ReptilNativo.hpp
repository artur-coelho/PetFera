#ifndef _REPTIL_NATIVO_HPP_
#define _REPTIL_NATIVO_HPP_

#include "Reptil.hpp"
#include "AnimalNativo.hpp"

class ReptilNativo : public Reptil, AnimalNativo {
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
					  << "Tipo do veneno: " << m_tipo_veneno << endl
					  << "Autorização do IBAMA: " << m_autorizacao_ibama << endl
					  << "UF de origem: " << m_uf_origem << endl
					  << "Autorização: " << m_autorizacao << endl;
		} 
	public:
		// construtores e destrutores {
		ReptilNativo();
		ReptilNativo(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno,
		 	   std::string autorizacao_ibama, std::string uf_origem, std::string autorizacao);
		~ReptilNativo();	
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
