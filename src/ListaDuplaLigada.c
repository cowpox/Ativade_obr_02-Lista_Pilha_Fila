#include <stdio.h>
#include <stdlib.h>
#include "../include/ListaDuplaLigada.h"

void inicializarLista(LISTA* l) {
  l->inicio = NULL;
}

void exibirLista(LISTA* l) {
  PONT end = l->inicio;
  printf("Lista: \" ");
  while (end != NULL) {
    printf("%d ", end->reg.chave);
    end = end->prox;
  }
  printf("\"\n");
}

int tamanho(LISTA* l) {
  PONT end = l->inicio;
  int tam = 0;
  while (end != NULL) {
    tam++;
    end = end->prox;
  }
  return tam;
}

int tamanhoEmBytes(LISTA* l) {
  return (tamanho(l) * sizeof(ELEMENTO)) + sizeof(LISTA);
}

PONT buscaSequencial(LISTA* l, TIPOCHAVE ch) {
  PONT pos = l->inicio;
  while (pos != NULL) {
    if (pos->reg.chave == ch) return pos;
    pos = pos->prox;
  }
  return NULL;
}

PONT buscaSeqOrd(LISTA* l, TIPOCHAVE ch) {
  PONT pos = l->inicio;
  while (pos != NULL && pos->reg.chave < ch) pos = pos->prox;
  if (pos != NULL && pos->reg.chave == ch) return pos;
  return NULL;
}

PONT buscaSeqExc(LISTA* l, TIPOCHAVE ch, PONT* ant) {
  *ant = NULL;
  PONT atual = l->inicio;
  while (atual != NULL && atual->reg.chave < ch) {
    *ant = atual;
    atual = atual->prox;
  }
  if ((atual != NULL) && (atual->reg.chave == ch)) return atual;
  return NULL;
}

bool excluirElemLista(LISTA* l, TIPOCHAVE ch) {
    PONT i = buscaSequencial(l, ch);
    if (i == NULL) return false; //não existe o registro na lista

    //deleçao do início
    if (i->ant == NULL && i->prox == NULL){ //único registro
        l->inicio = NULL;
    } else if (i->ant == NULL) { //primeiro registro
        l->inicio = i->prox;
        i->prox->ant = NULL;
    } else if (i->prox == NULL){ //ultimo registro
        i->ant->prox = NULL;
    } else { //deleção do meio
        i->ant->prox = i->prox;
        i->prox->ant = i->ant;
    }
    free(i);
    return true;
}

void reinicializarLista(LISTA* l) {
  PONT end = l->inicio;
  while (end != NULL) {
    PONT apagar = end;
    end = end->prox;
    free(apagar);
  }
  l->inicio = NULL;
}

bool inserirElemListaOrd(LISTA* l, REGISTRO reg) {
    TIPOCHAVE ch = reg.chave;

    // encontra posição de inserção
    PONT pos = l->inicio;
    while (pos != NULL && pos->reg.chave < ch) pos = pos->prox;

    // verifica duplicação
    if (pos != NULL && pos->reg.chave == ch)
        return false;  // elemento já existe!

    // alocação de memória para o registro
    PONT i = (PONT)malloc(sizeof(ELEMENTO));
    i->reg = reg;

    // ajuste dos ponteiros

    if (pos == NULL) { // Inserção no final da lista
        if (l->inicio == NULL) { // Lista vazia
            i->prox = NULL;
            i->ant = NULL;
            l->inicio = i;
        } else { // Lista não vazia
            PONT ultimo = l->inicio;
            while (ultimo->prox != NULL)
                ultimo = ultimo->prox;
            ultimo->prox = i;
            i->ant = ultimo;
            i->prox = NULL;
        }
    } else if (pos->ant == NULL) { // Inserção no início da lista
        i->prox = pos;
        i->ant = NULL;
        pos->ant = i;
        l->inicio = i;
    } else { // Inserção entre dois elementos
        i->prox = pos;
        i->ant = pos->ant;
        pos->ant->prox = i;
        pos->ant = i;
    }

    return true;

}

PONT retornarPrimeiro(LISTA* l, TIPOCHAVE* ch) {
  if (l->inicio != NULL) *ch = l->inicio->reg.chave;
  return l->inicio;
}

PONT retornarUltimo(LISTA* l, TIPOCHAVE* ch) {
  PONT ultimo = l->inicio;
  if (l->inicio == NULL) return NULL;
  while (ultimo->prox != NULL) ultimo = ultimo->prox;
  *ch = ultimo->reg.chave;
  return ultimo;
}
