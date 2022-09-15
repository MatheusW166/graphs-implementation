#include "i_grafo.h"

IGrafo::IGrafo(int m, int n)
{
    this->_m = m;
    this->_n = n;
}

int IGrafo::get_m()
{
    return this->_m;
}

int IGrafo::get_n()
{
    return this->_n;
}
