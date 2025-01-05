/******************************************************************************
//     filaDinamica.c
// Este programa gerencia filas lineares ligadas (implementacao dinamica).
// As filas gerenciadas podem ter um numero arbitrario de elementos.
// Não usaremos sentinela ou cabeça nesta estrutura.
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "../include/FilaDinamica.h"

void inicializarFila(FILA* f) {
    f->cabeca = (PONT)malloc(sizeof(ELEMENTO)); //aloca o nó cabeça
    f->cabeca->prox = NULL; //lista começa vazia
    f->fim = NULL; //fila não tem elementos
}

int tamanho(FILA* f) {
  PONT end = f->cabeca->prox;
  int tam = 0;
  while (end != NULL) {
    tam++;
    end = end->prox;
  }
  return tam;
}

int tamanhoEmBytes(FILA* f) {
  return ((tamanho(f) + 1) * sizeof(ELEMENTO)) + sizeof(FILA);
}

void reinicializarFila(FILA* f) {
    PONT end = f->cabeca->prox;
    while (end != NULL) {
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }
    f->cabeca->prox = NULL;
    f->fim = NULL;
}

void destruirFila(FILA* f) {
    PONT end = f->cabeca->prox;
    // Libera todos os elementos válidos
    while (end != NULL) {
        PONT apagar = end;
        end = end->prox;
        free(apagar);
    }
    // Libera o nó cabeça
    free(f->cabeca);
    f->cabeca = NULL;
    f->fim = NULL;
}


PONT retornarPrimeiro(FILA* f, TIPOCHAVE* ch) {
    // Verifica se há elementos na fila
    if (f->cabeca->prox == NULL) {
        return NULL; // se estiver vazia, retorna NULL
    }
    // Atribui a chave do primeiro elemento e retorna o ponteiro
    *ch = f->cabeca->prox->reg.chave;
    return f->cabeca->prox;
}

PONT retornarUltimo(FILA* f, TIPOCHAVE* ch) {
    // Verifica se há elementos na fila
    if (f->cabeca->prox == NULL) {
        return NULL; // se estiver vazia, retorna NULL
    }
    // Atribui a chave do ultimo elemento e retorna o ponteiro
    *ch = f->fim->reg.chave;
    return f->fim;
}

bool inserirNaFila(FILA* f, REGISTRO reg) {
  PONT novo = (PONT)malloc(sizeof(ELEMENTO)); //aloca memória para o novo elemento
  novo->reg = reg; //copia o registro para o novo elemento
  novo->prox = NULL; //ajusta o ponteiro de próx para NULL (pois é o último elemento)
  if (f->cabeca->prox == NULL) { //inserção na fila vazia
    f->cabeca->prox = novo;
  } else { //inserção na fila preenchida
    f->fim->prox = novo;
  }
  f->fim = novo; //atualização do ponteiro fim
  return true;
}

bool excluirDaFila(FILA* f, REGISTRO* reg) {
  if (f->cabeca->prox == NULL) {
    return false; //não é possível excluir de fila vazia
  }
  *reg = f->cabeca->prox->reg; //copia o registro do primeiro elemento
  PONT apagar = f->cabeca->prox; //copia o ponteiro para o primeiro elemento
  f->cabeca->prox = f->cabeca->prox->prox; //ajusta o ponteiro inicial para o segundo elemento
  free(apagar); //desaloca o primeiro elemento
  if (f->cabeca->prox == NULL) { //quando a fila fica vazia
    f->fim = NULL; //ajusta o ponteiro de fim para NULL
  }
  return true;
}

void exibirFila(FILA* f) {
  PONT end = f->cabeca->prox;
  printf("Fila: \" ");
  while (end != NULL) {
    printf("%d ", end->reg.chave);
    end = end->prox;
  }
  printf("\"\n");
}


PONT buscaSeq(FILA* f, TIPOCHAVE ch) {
    PONT pos = f->cabeca->prox; // Começa no primeiro elemento válido
    while (pos != NULL) {
        if (pos->reg.chave == ch) return pos; // Elemento encontrado
        pos = pos->prox; // Avança para o próximo
    }
    return NULL; // Elemento não encontrado
}

