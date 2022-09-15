#include <iostream>
#include <vector>
#include "grafo_adjacente\grafo.h"

using namespace std;

int main(int argc, char **argv)
{
    int m, n;
    cin >> m >> n;

    Grafo *grafo = new Grafo(m, n);
    grafo->ler_arestas();
    grafo->print_grafo();
    int componentes = grafo->dfs();
    cout << "Componentes: " << componentes << endl;
    grafo->print_vetores();

    return 0;
}