#include "Reptil.hpp"

// construtores e destrutores {
Reptil::Reptil() {}
Reptil::Reptil(int id, std::string classe, std::string nome_cientifico,
		 	   char sexo, double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo, bool venenoso, std::string tipo_veneno) : 
			   Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		 	   tratador, nome_batismo), m_venenoso(venenoso), m_tipo_veneno(tipo_veneno) { }
Reptil::~Reptil() {}
// } construtores e destrutores

// getters {
bool Reptil::get_m_venenoso(void) {
	return m_venenoso;
}

std::string Reptil::get_m_tipo_veneno(void) {
	return m_tipo_veneno;
}
// } getters

// setters {
void Reptil::set_m_venenoso(bool venenoso) {
	m_venenoso = venenoso;
}

void Reptil::set_m_tipo_veneno(std::string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
}
// } setters

void Reptil::imprimeAnimal() {
	std::cout << m_id << ";"
			  << m_classe << ";"
		   	  << m_nome_cientifico << ";"
			  << m_sexo << ";"
			  << m_tamanho << ";"
			  << m_dieta << ";"
			  << m_veterinario << ";"
			  << m_tratador << ";"
			  << m_nome_batismo << ";"
			  << m_venenoso << ";"
			  << m_tipo_veneno << ";";
}
