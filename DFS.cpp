#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int numVertices;
    list<int> *adjLists;
    bool *visited;

public:
    Graph(int V);
    void addEdge(int src, int dest);
    void DFS(int vertex);
};

Graph::Graph(int v)
{
    numVertices = v;
    adjLists = new list<int>[v];
    visited = new bool[v];
}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_front(dest);
}

void Graph::DFS(int vertex)
{
    visited[vertex] = true;
    list<int> adjList = adjLists[vertex];

    cout << vertex << " ";

    for (auto i = adjList.begin(); i != adjList.end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{
    Graph g(4);
    g.addEdge(2, 0);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(0, 1);
    g.addEdge(3, 3);
    g.addEdge(1, 3);

    g.DFS(2);

    return 0;
}