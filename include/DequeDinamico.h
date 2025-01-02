#ifndef DEQUE_DINAMICO_H
#define DEQUE_DINAMICO_H

#include <stdbool.h>

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
  // outros campos...
} REGISTRO;

typedef struct auxElem {
  REGISTRO reg;
  struct auxElem* ant;
  struct auxElem* prox;
} ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
  PONT cabeca;
} DEQUE;

/* Declarações de funções */
void inicializarDeque(DEQUE* d);
void exibirDequeInicio(DEQUE* d);
void exibirDequeFim(DEQUE* d);
int tamanho(DEQUE* d);
int tamanho2(DEQUE* d);
int tamanhoEmBytes(DEQUE* d);
PONT buscaSeq(DEQUE* d, TIPOCHAVE ch);
bool excluirElemDequeInicio(DEQUE* d, REGISTRO* reg);
bool excluirElemDequeFim(DEQUE* d, REGISTRO* reg);
void reinicializarDeque(DEQUE* d);
bool inserirDequeInicio(DEQUE* d, REGISTRO reg);
bool inserirDequeFim(DEQUE* d, REGISTRO reg);
PONT retornarPrimeiro1(DEQUE* d, TIPOCHAVE* ch);
PONT retornarPrimeiro2(DEQUE* d, TIPOCHAVE* ch);

#endif
