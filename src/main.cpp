#include "main.hpp"

int main(){
	Veterinario joao;
	Tratador jose;
	Date data;
	Anfibio teste(01, "Anfibio", "Anifibius", 'm', 0.1, "mato", joao, jose, "reinaldo", 5, data);
	
	
	std::cout << "Estou vivo ou não?" << std::endl;
	return 0;
}
