/**
* @file	Anifibio.hpp
* @brief	Classe que representa os anfíbios
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#ifndef _ANFIBIO_HPP_
#define _ANFIBIO_HPP_

#include "Animal.hpp"
#include "Date.hpp"

using std::endl;

class Anfibio : public Animal {
	private:
		std::ostream& print(std::ostream& os) const;
	public:
		// construtores e destrutores {
		Anfibio();
		Anfibio(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda);
		~Anfibio();
		// } construtores e destrutores
		
		// getters {
		int get_m_total_de_mudas(void);
		Date get_m_ultima_muda(void);
		// } getters

		// setters {
		void set_m_total_de_mudas(int total_de_mudas);
		void set_m_ultima_muda(Date ultima_muda);
		// } setters
		
		void escreverEmArquivo();
		void alterarDado();

	protected:
		// membros {
		int m_total_de_mudas;	/**< Define o número de mudas do anfíbio */
		Date m_ultima_muda;	/**< Define a data da última muda */
		// } membros
};

#endif
