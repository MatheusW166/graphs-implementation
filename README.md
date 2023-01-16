[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://github.com/MatheusW166/graphs-implementation/blob/main/LICENCE)

# Grafo com lista de adjacência
Implementação em C++ de grafo com lista de adjacência feita como trabalho semestral da universidade. A implementação possui uma interface que define as principais propriedades de um grafo, junto com métodos auxiliares para ler e imprimir as arestas. Também foi realizada a implementação do algoritmo DFS (busca em profundidade, em português).

## Uso
### Requisitos
- g++

## Teoria
### Lista de adjacência
Uma lista de adjacência é uma estrutura de dados para representar grafos. Em uma representação de lista de adjacência, podemos manter, para cada vértice do grafo, uma lista de todos os outros vértices com os quais ele tem uma aresta.

### DFS (depth-first search)
Um algoritmo de busca (ou de varredura) é qualquer algoritmo que visita todos os vértices de um grafo andando pelos arcos de um vértice a outro. Há muitas maneiras de fazer uma tal busca. Cada algoritmo de busca é caracterizado pela ordem em que visita os vértices.

A busca em profundidade não resolve um problema específico. Ela é apenas um arcabouço, ou pré-processamento, para a resolução eficiente de vários problemas concretos.  A busca DFS nos ajuda a compreender o grafo com que estamos lidando, revelando sua forma e reunindo informações (representadas pela numeração dos vértices) que ajudam a responder perguntas sobre o grafo.
