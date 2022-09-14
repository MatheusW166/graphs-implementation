#include "grafo_interface.h"

GrafoInterface::GrafoInterface(int m, int n)
{
    this->_m = m;
    this->_n = n;
}

int GrafoInterface::get_m()
{
    return this->_m;
}

int GrafoInterface::get_n()
{
    return this->_n;
}
