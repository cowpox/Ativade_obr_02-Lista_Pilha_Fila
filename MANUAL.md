# Manual de Uso

Este manual descreve as funcionalidades e comandos de cada estrutura implementada no projeto. Ele foi projetado para ajudar o usuário a interagir com os programas e entender como cada operação funciona.

## Lista Duplamente Ligada

### Comandos Disponíveis

* **Inserir Elemento** :

```bash
  i <chave>
```

  Insere um elemento na lista, mantendo a ordem crescente das chaves.

* **Excluir Elemento** :

```bash
  e <chave>
```

  Exclui o elemento com a chave especificada.

* **Exibir Lista** :

```bash
  p
```

  Exibe todos os elementos da lista.

* **Exibir Primeiro Elemento** :

```bash
  0
```

  Exibe a chave e o endereço do primeiro elemento.

* **Exibir Último Elemento** :

```bash
  u
```

  Exibe a chave e o endereço do último elemento.

* **Log de Utilização** :

```bash
  l
```

  Exibe informações sobre o tamanho da lista e seu uso de memória.

* **Destruir Lista** :

```bash
  d
```

  Remove todos os elementos da lista.

* **Ajuda** :

```bash
  h
```

  Exibe todos os comandos disponíveis.

### Exemplo de Uso

```bash
Comandos validos:
i 10  # Insere o elemento 10
p      # Exibe a lista
0      # Exibe o primeiro elemento
d      # Remove todos os elementos
```

---

## Pilha Estática

### Comandos Disponíveis

* **Inserir no Topo** :

```bash
  i <chave>
```

  Insere um elemento no topo da pilha.

* **Excluir do Topo** :

```bash
  e
```

  Remove o elemento do topo da pilha.

* **Exibir Pilha** :

```bash
  p
```

  Exibe os elementos da pilha do topo à base.

* **Exibir Pilha Invertida** :

```bash
  x
```

  Exibe os elementos da pilha da base ao topo.

* **Log de Utilização** :

```bash
  l
```

  Exibe informações sobre o tamanho da pilha e seu uso de memória.

* **Destruir Pilha** :

```bash
  d
```

  Remove todos os elementos da pilha.

### Exemplo de Uso

```bash
Comandos validos:
i 20  # Insere o elemento 20
e      # Remove o topo
x      # Exibe a pilha invertida
```

---

## Fila Dinâmica com Nó-Cabeça

### Comandos Disponíveis

* **Inserir no Final** :

```bash
  i <chave>
```

  Insere um elemento no final da fila.

* **Excluir do Início** :

```bash
  e
```

  Remove o elemento do início da fila.

* **Exibir Fila** :

```bash
  p
```

  Exibe todos os elementos da fila.

* **Log de Utilização** :

```bash
  l
```

  Exibe informações sobre o tamanho da fila e seu uso de memória.

* **Reinicializar Fila** :

```bash
  r
```

  Remove todos os elementos da fila, mantendo o nó-cabeça.

* **Destruir Fila** :

```bash
  d
```

  Remove todos os elementos da fila e desaloca o nó-cabeça.

### Exemplo de Uso

```bash
Comandos validos:
i 30  # Insere o elemento 30
p      # Exibe a fila
e      # Remove o primeiro elemento
```

---

## Deque Dinâmico

### Comandos Disponíveis

* **Inserir no Início** :

```bash
  i <chave>
```

  Insere um elemento no início do deque.

* **Inserir no Final** :

```bash
  j <chave>
```

  Insere um elemento no final do deque.

* **Excluir do Início** :

```bash
  e
```

  Remove o elemento do início do deque.

* **Excluir do Final** :

```bash
  f
```

  Remove o elemento do final do deque.

* **Exibir do Início** :

```bash
  o
```

  Exibe todos os elementos a partir do início.

* **Exibir do Fim** :

```bash
  p
```

  Exibe todos os elementos a partir do fim.

* **Calcular Maior Valor** :

```bash
  m
```

  Exibe o maior valor presente no deque.

* **Log de Utilização** :

```bash
  l
```

  Exibe informações sobre o tamanho do deque e seu uso de memória.

* **Destruir Deque** :

```bash
  d
```

  Remove todos os elementos e reinicializa o deque.

### Exemplo de Uso

```bash
Comandos validos:
i 40  # Insere no início
j 50  # Insere no final
m      # Exibe o maior valor
d      # Remove todos os elementos
```
