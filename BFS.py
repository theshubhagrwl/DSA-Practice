def bfs(visited, graph, node):
  visited.append(node)
  queue.append(node)

  while queue:
    s = queue.pop(0) 
    print (s, end = " ") 

    for neighbour in graph[s]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)

graph = {0: [1, 2], 1: [2], 2: [3], 3: [1, 2]}

visited = [] 
queue = []

bfs(visited, graph, 0)