[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://github.com/MatheusW166/graphs-implementation/blob/main/LICENCE)

| [Uso](#use) | [Teoria](#teoria) | [Referências](#refs) |

# Grafo com lista de adjacência
Implementação em C++ de grafo com lista de adjacência feita como trabalho semestral da universidade. A implementação possui uma interface que define as principais propriedades de um grafo, junto com métodos auxiliares para ler e imprimir as arestas. Também foi realizada a implementação do algoritmo DFS (busca em profundidade, em português).

## <span id="use">✅ Uso</span>
### Requisitos
- g++

## <span id="teoria">📝 Teoria</span>
### Lista de adjacência
Uma lista de adjacência é uma estrutura de dados para representar grafos. Em uma representação de lista de adjacência, podemos manter, para cada vértice do grafo, uma lista de todos os outros vértices com os quais ele tem uma aresta.

### DFS (depth-first search)
Um algoritmo de busca (ou de varredura) é qualquer algoritmo que visita todos os vértices de um grafo andando pelos arcos de um vértice a outro. Há muitas maneiras de fazer uma tal busca. Cada algoritmo de busca é caracterizado pela ordem em que visita os vértices.

A busca em profundidade não resolve um problema específico. Ela é apenas um arcabouço, ou pré-processamento, para a resolução eficiente de vários problemas concretos.  A busca DFS nos ajuda a compreender o grafo com que estamos lidando, revelando sua forma e reunindo informações (representadas pela numeração dos vértices) que ajudam a responder perguntas sobre o grafo.

## <span id="refs">📖 Referências</span>
- [Lista de adjacência](https://pt.wikipedia.org/wiki/Lista_de_adjac%C3%AAncia#:~:text=Em%20ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%2C%20uma,adjac%C3%AAncia%22%2C%20deste%20v%C3%A9rtice)
- [Busca em profundidade](https://www.ime.usp.br/~pf/algoritmos_para_grafos/aulas/dfs.html#:~:text=Um%20algoritmo%20de%20busca%20ou,em%20que%20visita%20os%20v%C3%A9rtices)
