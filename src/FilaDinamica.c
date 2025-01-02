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
  f->inicio = NULL;
  f->fim = NULL;
}

int tamanho(FILA* f) {
  PONT end = f->inicio;
  int tam = 0;
  while (end != NULL) {
    tam++;
    end = end->prox;
  }
  return tam;
}

int tamanhoEmBytes(FILA* f) {
  return (tamanho(f) * sizeof(ELEMENTO)) + sizeof(FILA);
}

void destruirFila(FILA* f) {
  PONT end = f->inicio;
  while (end != NULL) {
    PONT apagar = end;
    end = end->prox;
    free(apagar);
  }
  f->inicio = NULL;
  f->fim = NULL;
}

PONT retornarPrimeiro(FILA* f, TIPOCHAVE* ch) {
  if (f->inicio != NULL) *ch = f->inicio->reg.chave;
  return f->inicio;
}

PONT retornarUltimo(FILA* f, TIPOCHAVE* ch) {
  if (f->inicio == NULL) return NULL;
  *ch = f->fim->reg.chave;
  return f->fim;
}

bool inserirNaFila(FILA* f, REGISTRO reg) {
  PONT novo = (PONT)malloc(sizeof(ELEMENTO));
  novo->reg = reg;
  novo->prox = NULL;
  if (f->inicio == NULL) {
    f->inicio = novo;
  } else {
    f->fim->prox = novo;
  }
  f->fim = novo;
  return true;
}

bool excluirDaFila(FILA* f, REGISTRO* reg) {
  if (f->inicio == NULL) {
    return false;
  }
  *reg = f->inicio->reg;
  PONT apagar = f->inicio;
  f->inicio = f->inicio->prox;
  free(apagar);
  if (f->inicio == NULL) {
    f->fim = NULL;
  }
  return true;
}

void exibirFila(FILA* f) {
  PONT end = f->inicio;
  printf("Fila: \" ");
  while (end != NULL) {
    printf("%d ", end->reg.chave);
    end = end->prox;
  }
  printf("\"\n");
}

PONT buscaSeq(FILA* f, TIPOCHAVE ch) {
  PONT pos = f->inicio;
  while (pos != NULL) {
    if (pos->reg.chave == ch) return pos;
    pos = pos->prox;
  }
  return NULL;
}

PONT buscaSeqSent1(FILA* f, TIPOCHAVE ch) {
  if (!f->inicio) return NULL;
  PONT sentinela = malloc(sizeof(ELEMENTO));
  sentinela->reg.chave = ch;
  f->fim->prox = sentinela;
  PONT pos = f->inicio;
  while (pos->reg.chave != ch) pos = pos->prox;
  free(sentinela);
  f->fim->prox = NULL;
  if (pos != sentinela) return pos;
  return NULL;
}

PONT buscaSeqSent2(FILA* f, TIPOCHAVE ch) {
  if (!f->inicio) return NULL;
  ELEMENTO sentinela;
  sentinela.reg.chave = ch;
  f->fim->prox = &sentinela;
  PONT pos = f->inicio;
  while (pos->reg.chave != ch) pos = pos->prox;
  f->fim->prox = NULL;
  if (pos != &sentinela) return pos;
  return NULL;
}
