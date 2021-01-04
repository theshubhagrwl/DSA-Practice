#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v, e, **adj;

public:
    Graph(int v, int e);
    void addEdge(int start, int end);
    void BFS(int start, vector<bool> &visited);
};

Graph::Graph(int v, int e)
{
    this->v = v;
    this->e = e;
    adj = new int *[v];
    for (int row = 0; row < v; row++)
    {
        adj[row] = new int[v];
        for (int col = 0; col < v; col++)
        {
            adj[row][col] = 0;
        }
    }
}

void Graph::addEdge(int start, int end)
{
    adj[start][end] = 1;
    adj[end][start] = 1;
}

void Graph::BFS(int start, vector<bool> &visited)
{
    list<int> queue;
    visited[start] = true;
    queue.push_back(start);

    while (!queue.empty())
    {
        int currVertex = queue.front();
        cout << currVertex << " ";
        queue.pop_front();

        for (int i = 0; i < v; i++)
        {
            if (adj[currVertex][i] == 1 && !visited[i])
            {
                queue.push_back(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{
    int v = 5, e = 4;

    Graph G(v, e);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(1, 3);

    vector<bool> visited(v, false);

    G.BFS(0, visited);
}