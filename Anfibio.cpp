#include "Anfibio.hpp"

Anfibio::Anfibio() : Animal() {/*Construtor padrão*/}

Anfibio::~Anfibio() { /*Destrutor*/ }

void Anfibio::set_m_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
}

int Anfibio::get_m_total_de_mudas() {
	return m_total_de_mudas;
}

void Anfibio::set_m_ultima_muda(Date ultima_muda) {
	m_ultima_muda = ultima_muda;
}

Date Anfibio::get_m_ultima_muda() {
	return m_ultima_muda;
}