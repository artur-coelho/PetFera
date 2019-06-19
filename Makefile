# makefile para o projeto "Pet Fera"

# variáveis para evitar repetição de código {
EXEC_NAME = pet_fera
EXEC_DIR = ./bin
OBJ_DIR = ./build
INC_DIR = ./include
SRC_DIR = ./src
EXEC = $(EXEC_DIR)/$(EXEC_NAME)

CC = g++
CPPFLAGS = -O0 -Wall -std=c++11 -I$(INC_DIR)

OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Funcionario.o $(OBJ_DIR)/Veterinario.o $(OBJ_DIR)/Tratador.o $(OBJ_DIR)/Anfibio.o $(OBJ_DIR)/Mamifero.o $(OBJ_DIR)/Reptil.o $(OBJ_DIR)/Ave.o $(OBJ_DIR)/AnimalSilvestre.o $(OBJ_DIR)/AnimalNativo.o $(OBJ_DIR)/AnimalExotico.o $(OBJ_DIR)/AnfibioNativo.o $(OBJ_DIR)/AnfibioExotico.o $(OBJ_DIR)/MamiferoNativo.o $(OBJ_DIR)/MamiferoExotico.o $(OBJ_DIR)/ReptilNativo.o $(OBJ_DIR)/ReptilExotico.o $(OBJ_DIR)/AveNativo.o $(OBJ_DIR)/AveExotico.o $(OBJ_DIR)/PetFera.o $(OBJ_DIR)/Date.o $(OBJ_DIR)/Interface.o
# } variáveis para evitar repetição de código

# gerar_objetos {
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CC) $< -o $@ -c $(CPPFLAGS)
# } gerar_objetos 

# gerar_executavel {
$(EXEC) : $(OBJS)
	$(CC) $^ -o $@
# } gerar_executavel

# outras_funcionalidades {
.PHONY : clean
clean :
	rm -f ./build/*.o ./bin/*
# } outras_funcionalidades
