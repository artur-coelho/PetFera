#include "Animal.hpp"

// construtores e destrutores {
Animal(){}
~Animal(){}
// } construtores e destrutores

// getters {
int get_m_id(void) {
	return m_id;
}

std::string get_m_classe(void) {
	return m_classe;
}

std::string get_m_nome_cientifico(void) {
	return m_nome_cientifico;
}

char get_m_sexo(void) {
	return m_sexo;
}

double get_m_tamanho(void) {
	return m_tamanho;
}

std::string get_m_dieta(void) {
	return m_dieta;
}

Veterinario get_m_veterinario(void) {
	return m_veterinario;
}

Tratador get_m_tratador(void) {
	return m_tratador;
}

std::string get_m_nome_batismo(void) {
	return m_nome_batismo;
}
// } getters

// setters
void set_m_id(int id) {
	m_id = id;
}

void set_m_classe(std::string classe) {
	m_classe = classe;
}

void set_m_nome_cientifico(std::string nome_cientifico) {
	m_nome_cientifico = nome_cientifico;
}

void set_m_sexo(char sexo) {
	m_sexo = sexo;
}

void set_m_tamanho(double tamanho) {
	m_tamanho = tamanho;
}

void set_m_dieta(std::string dieta) {
	m_dieta = dieta;
}

void set_m_veterinario(Veterinario veterinario) {
	m_veterinario = veterinario;
}

void set_m_tratador(Tratador tratador) {
	m_tratador = tratador;
}

void set_m_nome_batismo(std::string nome_batismo) {
	m_nome_batismo = nome_batismo;
}
// } setters