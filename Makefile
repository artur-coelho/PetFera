# makefile para o projeto "Pet Fera"

# variáveis para evitar repetição de código {
OBJ = ./build
BIN = ./bin
HPP = ./include
CPP = ./src
EXE = $(BIN)/pet_fera
CC = g++
CPPFLAGS = -O0 -Wall -std=c++11 -I$(HPP)
OBJS = $(OBJ)/main.o $(OBJ)/Animal.o $(OBJ)/Funcionario.o $(OBJ)/Veterinario.o $(OBJ)/Tratador.o $(OBJ)/Anfibio.o $(OBJ)/Mamifero.o $(OBJ)/Reptil.o $(OBJ)/Ave.o $(OBJ)/AnimalSilvestre.o $(OBJ)/AnimalNativo.o $(OBJ)/AnimalExotico.o $(OBJ)/AnfibioNativo.o $(OBJ)/AnfibioExotico.o $(OBJ)/MamiferoNativo.o $(OBJ)/MamiferoExotico.o $(OBJ)/ReptilNativo.o $(OBJ)/ReptilExotico.o $(OBJ)/AveNativo.o $(OBJ)/AveExotico.o $(OBJ)/PetFera.o $(OBJ)/Interface.o
# } variáveis para evitar repetição de código

# gerar_executavel {
$(EXE) : $(OBJS)
	$(CC) -o $(EXE) $(OBJS)
# } gerar_executavel

# gerar_objetos {
$(OBJ)/main.o : $(CPP)/main.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/main.cpp -o $(OBJ)/main.o
$(OBJ)/Interface.o : $(CPP)/Interface.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Interface.cpp -o $(OBJ)/Interface.o
$(OBJ)/PetFera.o : $(CPP)/PetFera.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/PetFera.cpp -o $(OBJ)/PetFera.o
$(OBJ)/Animal.o : $(CPP)/Animal.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Animal.cpp -o $(OBJ)/Animal.o
$(OBJ)/Funcionario.o : $(CPP)/Funcionario.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Funcionario.cpp -o $(OBJ)/Funcionario.o
$(OBJ)/Veterinario.o : $(CPP)/Veterinario.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Veterinario.cpp -o $(OBJ)/Veterinario.o
$(OBJ)/Tratador.o : $(CPP)/Tratador.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Tratador.cpp -o $(OBJ)/Tratador.o
$(OBJ)/Anfibio.o : $(CPP)/Anfibio.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Anfibio.cpp -o $(OBJ)/Anfibio.o
$(OBJ)/Mamifero.o : $(CPP)/Mamifero.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Mamifero.cpp -o $(OBJ)/Mamifero.o
$(OBJ)/Reptil.o : $(CPP)/Reptil.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Reptil.cpp -o $(OBJ)/Reptil.o
$(OBJ)/Ave.o : $(CPP)/Ave.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/Ave.cpp -o $(OBJ)/Ave.o
$(OBJ)/AnimalSilvestre.o : $(CPP)/AnimalSilvestre.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AnimalSilvestre.cpp -o $(OBJ)/AnimalSilvestre.o
$(OBJ)/AnimalNativo.o : $(CPP)//AnimalNativo.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AnimalNativo.cpp -o $(OBJ)/AnimalNativo.o
$(OBJ)/AnimalExotico.o : $(CPP)/AnimalExotico.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AnimalExotico.cpp -o $(OBJ)/AnimalExotico.o
$(OBJ)/AnfibioNativo.o : $(CPP)/AnfibioNativo.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AnfibioNativo.cpp -o $(OBJ)/AnfibioNativo.o
$(OBJ)/AnfibioExotico.o : $(CPP)/AnfibioExotico.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AnfibioExotico.cpp -o $(OBJ)/AnfibioExotico.o
$(OBJ)/MamiferoNativo.o : $(CPP)/MamiferoNativo.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/MamiferoNativo.cpp -o $(OBJ)/MamiferoNativo.o
$(OBJ)/MamiferoExotico.o : $(CPP)/MamiferoExotico.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/MamiferoExotico.cpp -o $(OBJ)/MamiferoExotico.o
$(OBJ)/ReptilNativo.o : $(CPP)/ReptilNativo.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/ReptilNativo.cpp -o $(OBJ)/ReptilNativo.o
$(OBJ)/ReptilExotico.o : $(CPP)/ReptilExotico.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/ReptilExotico.cpp -o $(OBJ)/ReptilExotico.o
$(OBJ)/AveNativo.o : $(CPP)/AveNativo.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AveNativo.cpp -o $(OBJ)/AveNativo.o
$(OBJ)/AveExotico.o : $(CPP)/AveExotico.cpp
	$(CC) $(CPPFLAGS) -c $(CPP)/AveExotico.cpp -o $(OBJ)/AveExotico.o
# } gerar_objetos 

# outras_funcionalidades {
.PHONY : clean
clean :
	rm -f ./build/*.o ./bin/*
# } outras_funcionalidades
