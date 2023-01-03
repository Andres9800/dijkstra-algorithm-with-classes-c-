//
// Created by wtla2 on 2/2/2022.
//

#include "Graph.h"

//Se asigna espacio para la lista de adjacencia del grafo

Graph::Graph(int V) {

    this->V = V;
    adj = new list< pair<char, int > >[V];
}

void Graph::addEdge(char u, char v, int w) {
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}


//con esta funcion podemos ver el comportamiento del metodo
/*
void Graph::printVector(vector<int> vec) {
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout<< *it << "\t";
    }
    cout<<endl;
}


//Se calcula el camino mas corto a partir del vertice scr
void Graph::shortestPath(int src) {
    //Crea un set para almacenar los vertices que estan siendo procesados

    set< pair<int, int> > setds;

    //se crea un vector para las distancias y las inicializa en infinito

    vector<int> dist(V, INF);

    //Inserta src en un set e inicializa su distancia en 0
    setds.insert(make_pair(0,src));
    dist[src] = 0;

    //Ciclo que finaliza cuando todas las distancias mas cortas han sido finalizadas y setds se convierten en vacio

    while (!setds.empty()){
        // El primer set de vertices tiene la minima distancia
        // por tanto se puede extraer del set
        //printVector(dist);
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        //la etiqueta del vertice se almacena en el segundo par
        //se hace de esta manera para mantener los vertices
        // ordenados por la distancia

        int u = tmp.second;

        // i es utilizada para obtener todos los vertices adyacentes
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            //Saque todas las etiquetas y pesos de los vertices adyacentes de u
            int v = (*i).first;
            int weight = (*i).second;

            //Si hay un camino mas corto hacia v a traves de u
            if (dist[v] > dist[u] + weight){
                */
/*Si la distancia de v no es INF entonces debe estar en nuestro set,
                 * por lo que se elimina y se inserta de nuevo con el valor
                 * de la distancia minima actualizada
                 * Nota: se extrae solo aquellos vertices del Set para los cuales
                 * la distancia esta finalizada
                 * *//*

                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v],v)));

                    //Se actualiza la distancia de v
                dist[v] = dist[u]+weight;
                setds.insert(make_pair(dist[v], v));

            }
        }
    }

    //Se imprime el camino mas corto en dist[]

    cout<<"Vertice      Distancia desde Source\n";
    for (int i = 0; i < V; ++i) {
        cout<< i << "\t\t" << dist[i] << endl;
    }
}
*/

