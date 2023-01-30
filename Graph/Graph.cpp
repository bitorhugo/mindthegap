#include "Graph.hpp"
#include <endian.h>
#include <iostream>
#include <ostream>
#include <unordered_map>
#include <utility>

Graph::Graph(int V, std::unordered_set<Edge> adj)
  : M_V(V), M_E(0),
    M_AdjList(adj) {}


Graph::Graph(int V, int E, std::unordered_set<Edge> adj)
  : M_V(V), M_E(E),
    M_AdjList(adj) {}

void Graph::addEdge(Edge e) {
  if (M_AdjList.find(e) != M_AdjList.end()) {
    std::cerr << "Edge already exists!";
    return;
  }
  M_AdjList.insert(e);
  M_E += 1;
}

void Graph::printGraph() {
  for (auto& it : M_AdjList) {
    std::cout << it << " ";
  }
  std::cout << std::endl;
}
