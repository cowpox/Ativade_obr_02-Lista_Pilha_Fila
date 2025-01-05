# Makefile para compilar e limpar os arquivos do projeto

CC = gcc
CFLAGS = -Wall -g

# Diretórios
INCLUDE_DIR = include
SRC_DIR = src
MAIN_DIR = main
BIN_DIR = build

# Arquivos principais
MAIN_LISTA = $(MAIN_DIR)/MainListaDuplaLigada.c
MAIN_PILHA = $(MAIN_DIR)/MainPilhaEstatica.c
MAIN_FILA = $(MAIN_DIR)/MainFilaDinamica.c
MAIN_DEQUE = $(MAIN_DIR)/MainDeque.c

# Binários
BIN_LISTA = $(BIN_DIR)/MainListaDuplaLigada
BIN_PILHA = $(BIN_DIR)/MainPilhaEstatica
BIN_FILA = $(BIN_DIR)/MainFilaDinamica
BIN_DEQUE = $(BIN_DIR)/MainDeque

# Objetivos
all: directories $(BIN_LISTA) $(BIN_PILHA) $(BIN_FILA) $(BIN_DEQUE)

$(BIN_LISTA): $(MAIN_LISTA) $(SRC_DIR)/ListaDuplaLigada.c $(INCLUDE_DIR)/ListaDuplaLigada.h
	$(CC) $(CFLAGS) -o $@ $(MAIN_LISTA) $(SRC_DIR)/ListaDuplaLigada.c

$(BIN_PILHA): $(MAIN_PILHA) $(SRC_DIR)/PilhaEstatica.c $(INCLUDE_DIR)/PilhaEstatica.h
	$(CC) $(CFLAGS) -o $@ $(MAIN_PILHA) $(SRC_DIR)/PilhaEstatica.c

$(BIN_FILA): $(MAIN_FILA) $(SRC_DIR)/FilaDinamica.c $(INCLUDE_DIR)/FilaDinamica.h
	$(CC) $(CFLAGS) -o $@ $(MAIN_FILA) $(SRC_DIR)/FilaDinamica.c

$(BIN_DEQUE): $(MAIN_DEQUE) $(SRC_DIR)/DequeDinamico.c $(INCLUDE_DIR)/DequeDinamico.h
	$(CC) $(CFLAGS) -o $@ $(MAIN_DEQUE) $(SRC_DIR)/DequeDinamico.c

# Criar diretório build se não existir
directories:
	if not exist $(BIN_DIR) mkdir $(BIN_DIR)

# Limpar arquivos binários
clean:
	if exist $(BIN_DIR) del /q $(BIN_DIR)\*
