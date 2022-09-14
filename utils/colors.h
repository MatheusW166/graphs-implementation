#ifndef COLORS_H
#define COLORS_H

#include <string>

using namespace std;

enum Cores
{
    BRANCO,
    CINZA,
    PRETO
};

string get_color(int cor)
{
    switch (cor)
    {
    case BRANCO:
        return "BRANCO";
    case PRETO:
        return "PRETO";
    case CINZA:
        return "CINZA";
    default:
        return "SEM COR";
    }
}

#endif