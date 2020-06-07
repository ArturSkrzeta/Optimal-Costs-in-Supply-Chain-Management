#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph
{

    int V; // No. of vertices - private
    list< pair<int, int> > *adj; // In a weighted graph, we need to store vertex and weight pair for every edge

public:
    Graph(int V);  // Constructor
    void addEdge(int u, int v, int w); // function to add an edge to graph
    void shortestPath(int s); // prints shortest path from s
};
