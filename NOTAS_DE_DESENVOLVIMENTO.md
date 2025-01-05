# Notas de Desenvolvimento

Este documento detalha o progresso do desenvolvimento das estruturas de dados do projeto, incluindo as etapas realizadas, ajustes implementados e testes executados.

## Estrutura do Repositório

1. Criação inicial com o arquivo de Lista.
2. Renomeação de arquivos para padronização:
   * `Atividade_Lista__pilha_e_fila (1).pdf` -> `Atividade_Lista__pilha_e_fila.pdf`
   * `main.c` -> `MainListaDuplaLigada.c`
3. Organização do repositório em uma estrutura de diretórios clara e consistente:
   * `include/`: Arquivos de cabeçalho.
   * `src/`: Arquivos de implementação.
   * `main/`: Arquivos principais para testes.
4. Ajustes nos includes para apontar corretamente para os novos diretórios.

## Lista Duplamente Ligada

1. Modificação da estrutura `ELEMENTO` para incluir o campo adicional `*ant`.
2. Implementação da função de inserção considerando os casos:
   * Lista vazia.
   * Inserção no início, meio e fim.
3. Implementação da função de exclusão considerando os casos:
   * Exclusão do único elemento.
   * Exclusão do primeiro, último e elementos intermediários.
4. Ajustes realizados no arquivo `ListaDuplaLigada` para padronização e correção de bugs.
5. Testes realizados:
   * Inserções e exclusões com diferentes configurações da lista.

## Pilha Estática

1. Criação da função `exibirPilhaInvertida` para exibir os elementos da base para o topo.
2. Ajustes na interface e implementação para adicionar suporte à exibição invertida.
3. Testes realizados:
   * Pilha vazia, com um e com vários elementos.
   * Exibição normal e invertida.

## Fila Dinâmica com Nó-Cabeça

1. Modificação da estrutura para incluir um nó-cabeça, facilitando as operações de inserção e remoção.
2. Ajustes nas funções de inicialização, reinicialização e destruição para suportar o nó-cabeça.
3. Testes realizados:
   * Inserções e remoções em diferentes tamanhos de fila.
   * Busca sequencial de elementos.

## Deque Dinâmico

1. Implementação da função `encontrarMax` para calcular o maior elemento do deque.
2. Ajustes nas funções de exibição e no menu interativo para incluir opções adicionais.
3. Testes realizados:
   * Inserções e remoções em ambas as extremidades.
   * Cálculo do maior elemento em diferentes situações (deque vazio, ordenado, desordenado).

## Observações Finais

1. Ajustes gerais para padronização do código e organização do repositório.
2. Uso de um `Makefile` para facilitar a compilação e limpeza dos arquivos gerados.
3. Documentação detalhada criada para cada parte do projeto.

Se houver dúvidas ou pontos que precisem de revisão, por favor, entre em contato!
