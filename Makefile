# makefile para o projeto "Pet Fera"

# variáveis para evitar repetição de código {
OBJ = ./build
BIN = ./bin
HPP = ./include
CPP = ./src
EXE = $(BIN)/pet_fera
CC = g++
CPPFLAGS = -O0 -Wall -std=c++11 -I$(HPP)
OBJS = $(OBJ)/main.o $(OBJ)/Anfibio.o $(OBJ)/Animal.o $(OBJ)/Ave.o $(OBJ)/Funcionario.o $(OBJ)/Mamifero.o $(OBJ)/Reptil.o $(OBJ)/Tratador.o $(OBJ)/Veterinario.o
# }

# gerar_executavel {
$(EXE) : $(OBJS)
	$(CC) -o $(EXE) $(OBJS)
# }

# gerar_objetos {
$(OBJ)/main.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/main.cpp -o $(OBJ)/main.o
$(OBJ)/Anfibio.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Anfibio.cpp -o $(OBJ)/Anfibio.o
$(OBJ)/Animal.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Animal.cpp -o $(OBJ)/Animal.o
$(OBJ)/Ave.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Ave.cpp -o $(OBJ)/Ave.o
$(OBJ)/Funcionario.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Funcionario.cpp -o $(OBJ)/Funcionario.o
$(OBJ)/Mamifero.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Mamifero.cpp -o $(OBJ)/Mamifero.o
$(OBJ)/Reptil.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Reptil.cpp -o $(OBJ)/Reptil.o
$(OBJ)/Tratador.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Tratador.cpp -o $(OBJ)/Tratador.o
$(OBJ)/Veterinario.o :
	$(CC) $(CPPFLAGS) -c $(CPP)/Veterinario.cpp -o $(OBJ)/Veterinario.o
# }

# outras_funcionalidades {
clean :
	rm -f $(EXE) $(OBJS)
# }