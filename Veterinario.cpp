#include <iostream>
#include "Veterinario.hpp"

using namespace std;

Veterinario::Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo, char fator_rh, string especialidade, string crmv)
: funcionario(id,nome,cpf,idade, cpf, idade, tipo_sanguineo, fator_rh, especialidade, niv)
{

}
void set_m_crmv(string crmv)
{
	m_crmv = crmv;
}
string get_m_crmv()
{
	return m_crmv;
}