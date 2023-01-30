#pragma once

#include <ostream>
#include <unordered_set>
#include <vector>

#include "../Airport/Airport.hpp"
#include "../Flight/Flight.hpp"
#include "../Edge/Edge.hpp"

class Graph {
private:
  int M_V;
  int M_E;
  std::unordered_set<Edge> M_AdjList;

public:
  Graph(int V, std::unordered_set<Edge>);
  Graph(int V, int E, std::unordered_set<Edge>);

  void addEdge(Edge);
  void printGraph();

};
