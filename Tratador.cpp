#include <iostream>
#include "Tratador.hpp"
 

string converter_para_maiusculo(string& sua_string)
{
  for(int i = 0; i <sua_string.length(); i++)
  {
    sua_string[i] = toupper(sua_string[i]);
  }
  return sua_string;
}
 /*!
 * @Brief Construtor de Tratador
 * @param id  id do tratador
 * @param nome  nome do tratador 
 @ ...
 * ....
 */
Tratador::Tratador(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fator_rh, string especialidade, int nivel_de_segurança)
: funcionario(id,nome,cpf,idade, cpf, idade, tipo_sanguineo, fator_rh, especialidade, niv)
{

}
void Tratador::set_m_id(int id)
{
	m_id = id;
}
int Tratador::get_m_id()
{
	return m_id;
}
void Tratador::set_m_nome(string nome)
{
	m_nome = nome;
}
string Tratador::get_m_nome()
{
	return m_nome;
}
void set_m_cpf(string cpf)
{
	m_cpf = cpf;
}
string get_m_cpf()
{
	return m_cpf;
}
void set_m_idade(short idade)
{
	m_idade = idade;
}
short get_m_idade()
{
	return m_idade;
}
void set_m_tipo_sanguineo(string tipo)
{
	tipo_sang = converter_para_maiusculo(tipo);
	while (tipo_sang != 'AB' || tipo_sang != 'A' || tipo_sang != 'B' || tipo_sang != 'O')
	{
		cout << "Tipo sanguineo inválido" << endl;
	}
	m_tipo_sanguineo = tipo_sang;
}
string get_m_tipo_sanguineo()
{
	return m_tipo_sanguineo;
}
void set_m_fator_rh(char fator_rh)
{
	while(fator_rh != '+' || fator_rh !='-')
	{
		cout << "Fator RH inválido" << endl;
	}
	m_fator_rh = fator_rh;
}
char get_fator_rh()
{
	return m_fator_rh;
}
void set_m_especialidade(string especialidade)
{
	m_especialidade = especialidade;
}
void set_m_nivel_de_segurança(int nivel_de_segurança)
{
	while(nivel_de_segurança <= 0 || nivel_de_segurança > 2)
	{
		cout << "Entrada inválida, entre com um valor válido" << endl;
	}
	m_nivel_de_segurança = nivel_de_segurança;
}
int get_m_nivel_de_segurança()
{
	return m_nivel_de_segurança;
}
Tratador::~Tratador(){}
