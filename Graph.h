//
// Created by wtla2 on 2/2/2022.
//

#ifndef GRAFODIJKSTRA_GRAPH_H
#define GRAFODIJKSTRA_GRAPH_H

#include <iostream>
#include <list>
#include <vector>
#include <set>
#include "Producto.h"
using namespace std;

# define INF 0x3f3f3f3f // define un valor infinito

//este infinito es un valor muy grande en el orden de billones pero no esta el limite de int
// esto le permite al programa considerarlo como un valor infinito aunque no lo sea y aun asi
//poderlo utilizar para trabajos o calculos con las librerias de c++

/* V define el numero de vertices
 * En un grafo ponderado se necesita almacenar los vertices
 * y sus pesos en pares en cada arco
 * */

class Graph {

int V; // no
list< pair<char, int > > *adj;
public:
    Graph(int V);
    void addEdge(char u, char v, int w);
    void shortestPath(int s);
    void printVector(vector<int>);
};


#endif //GRAFODIJKSTRA_GRAPH_H
