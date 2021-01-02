#include <bits/stdc++.h>
using namespace std;

//Adjacency Matrix
int vArr[10][10];

void addEdgeInMatrix(int u, int v)
{
    vArr[u][v] = 1;
    vArr[v][u] = 1;
}

void printMatrix(int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << vArr[i][j] << " ";
        }
        cout << endl;
    }
}

//Adjacency List
void addEdge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << "Vertex " << i << ":";
        for (auto it : adj[i])
            cout << "-> " << it;
        cout << endl;
    }
}

int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    printGraph(adj, v);
    addEdgeInMatrix(0, 1);
    addEdgeInMatrix(0, 2);
    addEdgeInMatrix(0, 3);
    addEdgeInMatrix(1, 2);
    printMatrix(v);
}