//
// Created by kyoxc on 8/5/2020.
//

#ifndef GRAFO_VERTICECOSTO_H
#define GRAFO_VERTICECOSTO_H
#include "NodoGrafo.h"

class VerticeCosto {

public:
    NodoGrafo * vertice;
    int costo;
    VerticeCosto(NodoGrafo* vertice, int costo);

    bool operator < (const VerticeCosto& b) const{
        return costo > b.costo;
    }
};

#endif //GRAFO_VERTICECOSTO_H