#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include <iostream>
#include "..\interfaces\i_grafo.h"

using namespace std;

class Grafo : virtual public IGrafo
{

private:
    vector<vector<int>> arestas;
    vector<int> cor;
    vector<int> pi;
    vector<int> d;
    vector<int> f;

public:
    Grafo(int m, int n);
    void ler_arestas();
    void print_grafo();
    void print_vetores();
    int dfs();
    void dfs_visit(int *, int);
};

#endif