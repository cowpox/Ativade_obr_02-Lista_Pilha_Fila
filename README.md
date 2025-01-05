
# Projeto: Estruturas de Dados em C

Este repositório contém implementações e testes de quatro tipos de estruturas de dados em C: lista duplamente ligada, pilha estática, fila dinâmica com nó-cabeça e deque dinâmico. O objetivo é aplicar conceitos de estruturas de dados para criar implementações robustas e bem testadas.

## Estrutura do Repositório

O repositório está organizado da seguinte forma:

```
/
|-- build/             # Binários gerados após a compilação
|-- doc/               # Documentação do projeto
|   |-- Atividade_Lista__pilha_e_fila.pdf  # Descrição da atividade
|   |-- CHANGELOG.md   # Registro de alterações
|   |-- MANUAL.md      # Manual de uso das estruturas
|   |-- NOTAS_DE_DESENVOLVIMENTO.md  # Notas de desenvolvimento
|   |-- TESTS.md       # Casos de teste documentados
|-- include/           # Arquivos de cabeçalho (.h) para cada estrutura
|-- src/               # Implementações das estruturas (.c)
|-- main/              # Arquivos principais para testes (.c)
|-- README.md          # Documentação principal do projeto
|-- LICENSE            # Licença do projeto
|-- Makefile           # Comandos para compilação
```

### Principais Arquivos

- **Lista Duplamente Ligada**:

  - `include/ListaDuplaLigada.h`: Interface da lista.
  - `src/ListaDuplaLigada.c`: Implementação das funções da lista.
  - `main/MainListaDuplaLigada.c`: Testes interativos para a lista.
- **Pilha Estática**:

  - `include/PilhaEstatica.h`: Interface da pilha.
  - `src/PilhaEstatica.c`: Implementação das funções da pilha.
  - `main/MainPilhaEstatica.c`: Testes interativos para a pilha.
- **Fila Dinâmica com Nó-Cabeça**:

  - `include/FilaDinamica.h`: Interface da fila.
  - `src/FilaDinamica.c`: Implementação das funções da fila.
  - `main/MainFilaDinamica.c`: Testes interativos para a fila.
- **Deque Dinâmico**:

  - `include/DequeDinamico.h`: Interface do deque.
  - `src/DequeDinamico.c`: Implementação das funções do deque.
  - `main/MainDeque.c`: Testes interativos para o deque.

## Compilação e Execução

Recomenda-se utilizar o arquivo `Makefile` para compilar e executar os programas. Seguem os comandos principais:

### Compilar Todos os Programas

```bash
make all
```

### Executar os Testes

1. **Lista Duplamente Ligada**:

   ```bash
   ./build/MainListaDuplaLigada
   ```
2. **Pilha Estática**:

   ```bash
   ./build/MainPilhaEstatica
   ```
3. **Fila Dinâmica com Nó-Cabeça**:

   ```bash
   ./build/MainFilaDinamica
   ```
4. **Deque Dinâmico**:

   ```bash
   ./build/MainDeque
   ```

### Limpar Arquivos Compilados

```bash
make clean
```

## Funcionalidades Implementadas

### Lista Duplamente Ligada

- Inserção ordenada.
- Exclusão por chave.
- Busca sequencial.
- Exibição da lista.
- Tamanho da lista (em elementos e bytes).

### Pilha Estática

- Inserção e remoção no topo.
- Exibição dos elementos (normal e invertida).
- Busca sequencial.

### Fila Dinâmica com Nó-Cabeça

- Inserção no final.
- Remoção do início.
- Busca sequencial.
- Exibição da fila.
- Reinicialização e destruição da fila.

### Deque Dinâmico

- Inserção e remoção nos extremos (início e fim).
- Busca sequencial.
- Cálculo do maior valor.
- Exibição do deque (a partir do início ou do fim).

## Testes

Os testes realizados estão documentados em detalhes no arquivo [TESTS.md](doc/TESTS.md). Eles cobrem:

- Operações básicas em cada estrutura.
- Casos de borda, como estruturas vazias e operações com único elemento.

## Documentação Adicional

- [Changelog](doc/CHANGELOG.md)
- [Manual de Uso](doc/MANUAL.md)
- [Notas de Desenvolvimento](doc/NOTAS_DE_DESENVOLVIMENTO.md)

## Autor

Desenvolvido por Adriano Brandão como parte de um projeto acadêmico da disciplina de Estrutura de Dados (Professor Anderson Paulo Avila Santos - Universidade Estadual de Londrina) para estudar estruturas lineares.

## Licença

Este projeto é disponibilizado sob a licença MIT. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
