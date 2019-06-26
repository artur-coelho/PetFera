/**
* @file	main.cpp
* @brief	Função principal
* @details	O programa irá instanciar um objeto do tipo interface que servirá para interação com o
			usuário. A partir desse objeto instanciado haverá as chamadas dos métodos das outras
			classes.
* @author	Alvaro	Prudencio Araujo
* @author	Artur Augusto Rocha Coelho
* @author	Song Jong Márcio Simoni da Costa
* @since	07/05/2019
* @date	26/06/2019
*/

#include "Interface.hpp"

int main() {
	Interface PetFera;
	PetFera.boasVindas();
	return 0;
}