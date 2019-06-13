#include "Animal.hpp"

// construtores e destrutores {
Animal::Animal() {}
Animal::Animal(int id, std::string classe, std::string nome_cientifico, char sexo,
			   double tamanho, std::string dieta, Veterinario* veterinario,
		 	   Tratador* tratador, std::string nome_batismo) : 
				m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico),
				m_sexo(sexo), m_tamanho(tamanho), m_dieta(dieta), m_veterinario(veterinario),
				m_tratador(tratador), m_nome_batismo(nome_batismo) { } 
Animal::~Animal() {}
// } construtores e destrutores

// getters {
int Animal::get_m_id(void) {
	return m_id;
}

std::string Animal::get_m_classe(void) {
	return m_classe;
}

std::string Animal::get_m_nome_cientifico(void) {
	return m_nome_cientifico;
}

char Animal::get_m_sexo(void) {
	return m_sexo;
}

double Animal::get_m_tamanho(void) {
	return m_tamanho;
}

std::string Animal::get_m_dieta(void) {
	return m_dieta;
}

Veterinario* Animal::get_m_veterinario(void) {
	return m_veterinario;
}

Tratador* Animal::get_m_tratador(void) {
	return m_tratador;
}

std::string Animal::get_m_nome_batismo(void) {
	return m_nome_batismo;
}
// } getters

// setters
void Animal::set_m_id(int id) {
	m_id = id;
}

void Animal::set_m_classe(std::string classe) {
	m_classe = classe;
}

void Animal::set_m_nome_cientifico(std::string nome_cientifico) {
	m_nome_cientifico = nome_cientifico;
}

void Animal::set_m_sexo(char sexo) {
	m_sexo = sexo;
}

void Animal::set_m_tamanho(double tamanho) {
	m_tamanho = tamanho;
}

void Animal::set_m_dieta(std::string dieta) {
	m_dieta = dieta;
}

void Animal::set_m_veterinario(Veterinario* veterinario) {
	m_veterinario = veterinario;
}

void Animal::set_m_tratador(Tratador* tratador) {
	m_tratador = tratador;
}

void Animal::set_m_nome_batismo(std::string nome_batismo) {
	m_nome_batismo = nome_batismo;
}
// } setters

//operadores {
std::ostream& operator<<(std::ostream& os, const Animal& animal) {
			return animal.print(os);
		}
	
// } operadores