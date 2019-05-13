#include "Animal.hpp"

int Animal::get_m_id(void){
	return m_id;
}

std::string Animal::get_m_classe(void){
	return m_classe;
}

std::string Animal::get_m_nome_cientifico(void){
	return m_nome_cientifico;
}

char Animal::get_m_sexo(void){
	return m_sexo;
}

double Animal::get_m_tamanho(void){
	return m_tamanho;
}

std::string Animal::get_m_dieta(void){
	return m_dieta;
}

Veterinario Animal::get_m_veterinario(void){
	return m_veterinario;
}

Tratador Animal::get_m_tratador(void){
	return m_tratador;
}

std::string Animal::get_m_nome_batismo(void){
	return m_nome_batismo;
}