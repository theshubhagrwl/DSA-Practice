class Graph {
  constructor(numberOfVertices) {
    this.numberOfVertices = numberOfVertices;
    this.adjList = new Map();
  }

  addVertex(v) {
    this.adjList.set(v, []);
  }

  addEdge(v, w) {
    this.adjList.get(v).push(w);
    this.adjList.get(w).push(v);
  }

  printGraph() {
    var get_keys = this.adjList.keys();
    for (var i of get_keys) {
      var get_values = this.adjList.get(i);
      var conc = "";
      for (var j of get_values) {
        conc += j + " ";
      }
      console.log(i + " -> " + conc);
    }
  }

  bfs(startingNode) {
    var visited = {};
    var q = [];
    visited[startingNode] = true;
    q.push(startingNode);

    while (q.length > 0) {
      var qElement = q.shift();
      console.log(qElement);

      var getList = this.adjList.get(qElement);

      for (var i in getList) {
        var neighbor = getList[i];

        if (!visited[neighbor]) {
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }
  }
  dfs(startingNode) {
    var visited = {};
    this.DFSutil(startingNode, visited);
  }
  DFSutil(vertex, visited) {
    visited[vertex] = true;
    console.log(vertex);

    var getNeighbours = this.adjList.get(vertex);
    for (var i in getNeighbours) {
      var getElement = getNeighbours[i];
      if (!visited[getElement]) {
        this.DFSutil(getElement, visited);
      }
    }
  }
}

const g = new Graph(4);
g.addVertex(2);
g.addVertex(4);
g.addVertex(6);
g.addVertex(8);
g.addEdge(2, 4);
g.addEdge(4, 6);
g.addEdge(2, 8);
// g.printGraph();
console.log("BFS");
g.bfs(2);
console.log("DFS");
g.dfs(2);
