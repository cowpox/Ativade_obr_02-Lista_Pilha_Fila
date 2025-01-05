# Testes Realizados

Este documento descreve os casos de teste realizados para cada estrutura implementada, garantindo o correto funcionamento das funcionalidades e cobrindo cenários de borda.

---

## Lista Duplamente Ligada

### Testes de Inserção

* Inserção no início:
  * **Entrada** : Lista vazia, chave 10.
  * **Resultado esperado** : Elemento 10 inserido no início.
* Inserção no meio:
  * **Entrada** : Lista com chaves [10, 30], chave 20.
  * **Resultado esperado** : Elemento 20 inserido entre 10 e 30.
* Inserção no fim:
  * **Entrada** : Lista com chaves [10, 20], chave 30.
  * **Resultado esperado** : Elemento 30 inserido no fim.

### Testes de Exclusão

* Exclusão do único elemento:
  * **Entrada** : Lista com chave [10], chave 10.
  * **Resultado esperado** : Lista vazia.
* Exclusão do primeiro elemento:
  * **Entrada** : Lista com chaves [10, 20, 30], chave 10.
  * **Resultado esperado** : Lista com chaves [20, 30].
* Exclusão do último elemento:
  * **Entrada** : Lista com chaves [10, 20, 30], chave 30.
  * **Resultado esperado** : Lista com chaves [10, 20].
* Exclusão de elemento inexistente:
  * **Entrada** : Lista com chaves [10, 20, 30], chave 40.
  * **Resultado esperado** : Mensagem de erro.

---

## Pilha Estática

### Testes de Inserção

* Inserção em pilha vazia:
  * **Entrada** : Pilha vazia, chave 10.
  * **Resultado esperado** : Elemento 10 inserido no topo.
* Inserção até o limite:
  * **Entrada** : Pilha com 49 elementos, chave 50.
  * **Resultado esperado** : Elemento 50 inserido com sucesso.
* Inserção após o limite:
  * **Entrada** : Pilha com 50 elementos, chave 51.
  * **Resultado esperado** : Mensagem de erro.

### Testes de Exclusão

* Exclusão de elemento do topo:
  * **Entrada** : Pilha com chaves [10, 20, 30].
  * **Resultado esperado** : Elemento 30 removido.
* Exclusão de pilha vazia:
  * **Entrada** : Pilha vazia.
  * **Resultado esperado** : Mensagem de erro.

### Testes de Exibição

* Exibição normal:
  * **Entrada** : Pilha com chaves [10, 20, 30].
  * **Resultado esperado** : Saída: "30 20 10".
* Exibição invertida:
  * **Entrada** : Pilha com chaves [10, 20, 30].
  * **Resultado esperado** : Saída: "10 20 30".

---

## Fila Dinâmica com Nó-Cabeça

### Testes de Inserção

* Inserção em fila vazia:
  * **Entrada** : Fila vazia, chave 10.
  * **Resultado esperado** : Elemento 10 inserido.
* Inserção em fila com elementos:
  * **Entrada** : Fila com chaves [10], chave 20.
  * **Resultado esperado** : Fila com chaves [10, 20].

### Testes de Exclusão

* Exclusão do único elemento:
  * **Entrada** : Fila com chave [10].
  * **Resultado esperado** : Fila vazia.
* Exclusão do primeiro elemento:
  * **Entrada** : Fila com chaves [10, 20].
  * **Resultado esperado** : Fila com chave [20].

### Testes de Exibição

* Exibição de fila vazia:
  * **Entrada** : Fila vazia.
  * **Resultado esperado** : Saída: "Fila: "
* Exibição de fila com elementos:
  * **Entrada** : Fila com chaves [10, 20, 30].
  * **Resultado esperado** : Saída: "10 20 30".

---

## Deque Dinâmico

### Testes de Inserção

* Inserção no início:
  * **Entrada** : Deque vazio, chave 10.
  * **Resultado esperado** : Elemento 10 inserido no início.
* Inserção no fim:
  * **Entrada** : Deque com chaves [10], chave 20.
  * **Resultado esperado** : Deque com chaves [10, 20].

### Testes de Exclusão

* Exclusão do início:
  * **Entrada** : Deque com chaves [10, 20].
  * **Resultado esperado** : Deque com chave [20].
* Exclusão do fim:
  * **Entrada** : Deque com chaves [10, 20].
  * **Resultado esperado** : Deque com chave [10].

### Testes de Cálculo

* Cálculo do maior valor:
  * **Entrada** : Deque com chaves [10, 20, 30].
  * **Resultado esperado** : Maior valor: 30.
* Cálculo com deque vazio:
  * **Entrada** : Deque vazio.
  * **Resultado esperado** : Mensagem de erro.

### Testes de Exibição

* Exibição do início:
  * **Entrada** : Deque com chaves [10, 20, 30].
  * **Resultado esperado** : Saída: "10 20 30".
* Exibição do fim:
  * **Entrada** : Deque com chaves [10, 20, 30].
  * **Resultado esperado** : Saída: "30 20 10".
