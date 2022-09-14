#include "..\utils\colors.h"
#include "grafo.h"
#include <string>

Grafo::Grafo(int m, int n) : GrafoInterface(m, n)
{
    arestas.assign(m, vector<int>());
}

void Grafo::ler_arestas()
{
    int u, v;
    int m = get_m();
    while (m--)
    {
        cin >> u >> v;
        u--;
        v--;
        arestas[u].push_back(v);
        arestas[v].push_back(u);
    }
}

void Grafo::print_grafo()
{
    int m = get_m();
    int n = get_n();
    cout << n << " Vertices " << m << " Arestas " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "V " << i;
        for (auto j : arestas[i])
        {
            cout << " - " << j;
        }
        cout << endl;
    }
}

void Grafo::print_vetores()
{
    int n = get_n();
    for (int i = 0; i < n; i++)
    {
        cout << "V: " << i
             << " Cor: " << get_color(cor[i])
             << " Pi: " << pi[i]
             << " d: " << d[i]
             << " f: " << f[i]
             << endl;
    }
}

int Grafo::dfs()
{
    int n = get_n();
    cor.assign(n, BRANCO);
    pi.assign(n, -1);
    d.assign(n, 0);
    f.assign(n, 0);
    int tempo = 0;
    int componentes = 0;
    for (int i = 0; i < n; i++)
    {
        if (cor[i] == PRETO)
        {
            continue;
        }
        componentes++;
        dfs_visit(&tempo, i);
    }
    return componentes;
}

void Grafo::dfs_visit(int *t, int u)
{
    (*t)++;
    d[u] = *t;
    cor[u] = CINZA;
    for (auto v : arestas[u])
    {
        if (cor[v] == BRANCO)
        {
            pi[v] = u;
            dfs_visit(t, v);
        }
    }
    cor[u] = PRETO;
    (*t)++;
    f[u] = *t;
}