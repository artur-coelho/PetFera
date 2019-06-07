#ifndef _ANFIBIO_HPP_
#define _ANFIBIO_HPP__

#include "Animal.hpp"
#include "Tempo.hpp"

class Anfibio : Animal {
	public:
		// construtores e destrutores {
		Anfibio();
		Anfibio(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, int total_de_mudas, Date ultima_muda);
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

	protected:
		// membros {
		int m_total_de_mudas;
		Date m_ultima_muda;
		// } membros
};

#endif
