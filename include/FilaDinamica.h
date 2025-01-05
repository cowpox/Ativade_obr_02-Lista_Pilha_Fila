#ifndef FILA_DINAMICA_H
#define FILA_DINAMICA_H

#include <stdbool.h>

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
  // outros campos...
} REGISTRO;

typedef struct aux {
  REGISTRO reg;
  struct aux* prox;
} ELEMENTO, *PONT;


typedef struct {
  PONT cabeca;
  PONT fim;
} FILA;



/* Declarações de funções */
void inicializarFila(FILA* f);
int tamanho(FILA* f);
int tamanhoEmBytes(FILA* f);
void reinicializarFila(FILA* f);
void destruirFila(FILA* f);
PONT retornarPrimeiro(FILA* f, TIPOCHAVE* ch);
PONT retornarUltimo(FILA* f, TIPOCHAVE* ch);
bool inserirNaFila(FILA* f, REGISTRO reg);
bool excluirDaFila(FILA* f, REGISTRO* reg);
void exibirFila(FILA* f);
PONT buscaSeq(FILA* f, TIPOCHAVE ch);

#endif
