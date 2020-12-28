#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int numVertices;
    list<int> *adjLists;
    bool *visited;

public:
    Graph(int v);
    void addEdge(int src, int dest);
    void BFS(int startVertex);
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

void Graph::BFS(int startVertex)
{
    list<int> queue;
    visited[startVertex] = true;
    queue.push_back(startVertex);

    list<int>::iterator i;
    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited: " << currentVertex << " ";
        queue.pop_front();

        for (i = adjLists[currentVertex].begin(); i != adjLists[currentVertex].end(); i++)
        {
            int adjVertex = *i;
            if (!visited[adjVertex])
            {
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(0);

    return 0;
}