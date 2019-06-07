#include "Ave.hpp"

// construtores e destrutores {
Ave::Ave() {}
Ave::Ave(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario veterinario,
		 	   Tratador tratador, std::string nome_batismo, double tamanho_do_bico_cm, 
		 	   double envergadura_das_asas) : 
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_tamanho_do_bico_cm(tamanho_do_bico_cm),
		 	   m_envergadura_das_asas(envergadura_das_asas) { }

Ave::~Ave() {}
// } construtores e destrutores

// getters {
double Ave::get_m_tamanho_do_bico_cm(void) {
	return m_tamanho_do_bico_cm;
}

double Ave::get_m_envergadura_das_asas(void) {
	return m_envergadura_das_asas;
}
// } getters

// setters {
void Ave::set_m_tamanho_do_bico_cm(double tamanho_do_bico_cm) {
	m_tamanho_do_bico_cm = tamanho_do_bico_cm;
}

void Ave::set_m_envergadura_das_asas(double envergadura_das_asas) {
	m_envergadura_das_asas = envergadura_das_asas;
}
// } setters
