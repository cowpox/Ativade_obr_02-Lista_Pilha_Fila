#include <stdio.h>
#include <stdlib.h>
#include "../include/DequeDinamico.h"

void inicializarDeque(DEQUE* d) {
  d->cabeca = (PONT) malloc(sizeof(ELEMENTO));
  d->cabeca->prox = d->cabeca;
  d->cabeca->ant = d->cabeca;
}

void exibirDequeInicio(DEQUE* d) {
  PONT end = d->cabeca->prox;
  printf("Deque partindo do início: \" ");
  while (end != d->cabeca) {
    printf("%i ", end->reg.chave);
    end = end->prox;
  }
  printf("\"\n");
}

void exibirDequeFim(DEQUE* d) {
  PONT end = d->cabeca->ant;
  printf("Deque partindo do fim: \" ");
  while (end != d->cabeca) {
    printf("%i ", end->reg.chave);
    end = end->ant;
  }
  printf("\"\n");
}

int tamanho(DEQUE* d) {
  PONT end = d->cabeca->prox;
  int tam = 0;
  while (end != d->cabeca) {
    tam++;
    end = end->prox;
  }
  return tam;
}

int tamanho2(DEQUE* d) {
  PONT end = d->cabeca->ant;
  int tam = 0;
  while (end != d->cabeca) {
    tam++;
    end = end->ant;
  }
  return tam;
}

int tamanhoEmBytes(DEQUE* d) {
  return ((tamanho(d) + 1) * sizeof(ELEMENTO)) + sizeof(DEQUE);
}

PONT buscaSeq(DEQUE* d, TIPOCHAVE ch) {
  PONT pos = d->cabeca->prox;
  d->cabeca->reg.chave = ch;
  while (pos->reg.chave != ch) pos = pos->prox;
  if (pos != d->cabeca) return pos;
  return NULL;
}

bool excluirElemDequeInicio(DEQUE* d, REGISTRO* reg) {
  if (d->cabeca->prox == d->cabeca) return false;
  PONT apagar = d->cabeca->prox;
  *reg = apagar->reg;
  d->cabeca->prox = apagar->prox;
  apagar->prox->ant = d->cabeca;
  free(apagar);
  return true;
}

bool excluirElemDequeFim(DEQUE* d, REGISTRO* reg) {
  if (d->cabeca->prox == d->cabeca) return false;
  PONT apagar = d->cabeca->ant;
  *reg = apagar->reg;
  d->cabeca->ant = apagar->ant;
  apagar->ant->prox = d->cabeca;
  free(apagar);
  return true;
}

void reinicializarDeque(DEQUE* d) {
  PONT end = d->cabeca->prox;
  while (end != d->cabeca) {
    PONT apagar = end;
    end = end->prox;
    free(apagar);
  }
  d->cabeca->prox = d->cabeca;
  d->cabeca->ant = d->cabeca;
}

bool inserirDequeInicio(DEQUE* d, REGISTRO reg) {
  PONT i = (PONT) malloc(sizeof(ELEMENTO));
  i->reg = reg;
  i->ant = d->cabeca;
  i->prox = d->cabeca->prox;
  d->cabeca->prox = i;
  i->prox->ant = i;
  return true;
}

bool inserirDequeFim(DEQUE* d, REGISTRO reg) {
  PONT i = (PONT) malloc(sizeof(ELEMENTO));
  i->reg = reg;
  i->prox = d->cabeca;
  i->ant = d->cabeca->ant;
  d->cabeca->ant = i;
  i->ant->prox = i;
  return true;
}

PONT retornarPrimeiro1(DEQUE* d, TIPOCHAVE* ch) {
  if (d->cabeca->prox != d->cabeca) *ch = d->cabeca->prox->reg.chave;
  else return NULL;
  return d->cabeca->prox;
}

PONT retornarPrimeiro2(DEQUE* d, TIPOCHAVE* ch) {
  if (d->cabeca->ant != d->cabeca) *ch = d->cabeca->ant->reg.chave;
  else return NULL;
  return d->cabeca->ant;
}
