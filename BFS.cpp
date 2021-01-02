#include <bits/stdc++.h>

using namespace std;

class Graph
{
    // int numVertices;
    // list<int> *adjLists;
    // bool *visited;

    map<int, list<int>> l;

public:	
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}	

	void bfs(int src)
	{
		map<int,bool> visited;
		list<int> q;

		q.push_back(src);
		visited[src] = true;
		while(!q.empty())
		{
			int node = q.front();
			cout << node << " ";
			q.pop_front();


			for(auto adj = l[node].begin(); adj != l[node].end(); adj++)
			{
				if(!visited[*adj])
				{
					q.push_back(*adj);
					visited[*adj] = true;
				}
			}

		}

	}
	void printMap(){
		for (auto it : l)
		{
			cout << it.first  << " " ;
		}
	}

    // Graph(int v);
    // void addEdge(int src, int dest);
    // void BFS(int startVertex);
};

// Graph::Graph(int v)
// {
//     numVertices = v;
//     adjLists = new list<int>[v];
//     visited = new bool[v];
// }

// void Graph::addEdge(int src, int dest)
// {
//     adjLists[src].push_front(dest);
// }

// void Graph::BFS(int startVertex)
// {
//     list<int> queue;
//     visited[startVertex] = true;
//     queue.push_back(startVertex);

//     list<int>::iterator i;
//     while (!queue.empty())
//     {
//         int currentVertex = queue.front();
//         cout << "Visited: " << currentVertex << " ";
//         queue.pop_front();

//         for (i = adjLists[currentVertex].begin(); i != adjLists[currentVertex].end(); i++)
//         {
//             int adjVertex = *i;
//             if (!visited[adjVertex])
//             {
//                 visited[adjVertex] = true;
//                 queue.push_back(adjVertex);
//             }
//         }
//     }
// }

int main()
{
    // Graph g(5);
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);

	g.bfs(0);

    return 0;
}