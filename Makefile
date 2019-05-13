# Makefile para o projeto "Pet Fera"
EXE = pet-fera
CC = g++
CPPFLAGS = -O0 -Wall -std=c++11
OBJS = main.o Anfibio.o Animal.o Ave.o Funcionario.o Mamifero.o Reptil.o Tratador.o Veterinario.o
$(EXE) : $(OBJS)
	$(CC) -o $(EXE) $(OBJS)
main.o :
	$(CC) $(CPPFLAGS) -c main.cpp
Anfibio.o :
	$(CC) $(CPPFLAGS) -c Anfibio.cpp
Animal.o :
	$(CC) $(CPPFLAGS) -c Animal.cpp
Ave.o :
	$(CC) $(CPPFLAGS) -c Ave.cpp
Funcionario.o :
	$(CC) $(CPPFLAGS) -c Funcionario.cpp
Mamifero.o :
	$(CC) $(CPPFLAGS) -c Mamifero.cpp
Reptil.o :
	$(CC) $(CPPFLAGS) -c Reptil.cpp
Tratador.o :
	$(CC) $(CPPFLAGS) -c Tratador.cpp
Veterinario.o :
	$(CC) $(CPPFLAGS) -c Veterinario.cpp
clean :
	rm -f $(EXE) $(OBJS)