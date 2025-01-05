# Changelog

## Versão Inicial

### Lista Duplamente Ligada

* Estrutura modificada para incluir ponteiro adicional `ant`.
* Implementação das funções principais:
  * Inserção ordenada com ajuste de ponteiros (`ant` e `prox`).
  * Exclusão considerando casos: único elemento, início, meio e fim.
  * Exibição da lista.
  * Busca sequencial.
  * Funções auxiliares para calcular tamanho e reinicializar.
* Testes realizados:
  * Inserção (início, meio, fim).
  * Exclusão (elemento único, início, meio, fim, inexistente).

### Pilha Estática

* Implementada a função `exibirPilhaInvertida`, que exibe elementos da base para o topo.
* Ajustes na interface e na função principal para adicionar opção de exibição invertida.
* Testes realizados:
  * Pilha vazia.
  * Pilha com um elemento.
  * Pilha com cinco elementos (normal e invertida).

### Fila Dinâmica com Nó-Cabeça

* Adicionado nó-cabeça para facilitar operações.
* Modificações realizadas:
  * Funções de inicialização, reinicialização e destruição.
  * Inserção no final com ajuste do ponteiro `fim`.
  * Exclusão do início com desalocação segura.
  * Busca sequencial considerando elementos válidos.
* Testes realizados:
  * Inserção e remoção com diferentes tamanhos de fila (vazia, um, dois, cinco elementos).

### Deque Dinâmico

* Função `encontrarMax` criada para calcular o maior elemento do deque.
* Ajustes nas funções de exibição para considerar a leitura do início ou do fim.
* Modificação na interface e testes interativos:
  * Adição de opção no menu para calcular o maior elemento.
* Testes realizados:
  * Deque vazio.
  * Deque com um elemento.
  * Deque com elementos em diferentes ordens (crescente, decrescente, aleatória).


## Melhorias Finais

- Organização dos arquivos em diretórios:
  - `include/` para cabeçalhos.
  - `src/` para implementações.
  - `main/` para arquivos de teste.
  - `build/` para binários gerados.
  - `doc/` para documentação.
- Adição de um `Makefile` para facilitar a compilação e limpeza de arquivos.
- Criação de arquivos de documentação:
  - `README.md` para visão geral do projeto.
  - `MANUAL.md` para instruções de uso.
  - `NOTAS_DE_DESENVOLVIMENTO.md` para detalhes do progresso.
  - `TESTS.md` para documentação dos testes realizados.
- Ajustes finais nos comandos `help` em cada arquivo principal.
