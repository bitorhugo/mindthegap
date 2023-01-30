#include <cstdlib>
#include <fstream>
#include <iostream>
#include <future>
#include <ostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include "Airport/Airport.hpp"
#include "Graph/Graph.hpp"
#include "SafeInputStream/SafeInputStream.hpp"
#include "Airline/Airline.hpp"
#include "Helpers/StringHelpers.hpp"
#include "Flight/Flight.hpp"
#include "Edge/Edge.hpp"



int main() {

  std::string airline_path = "../Data/airlines.csv";
  std::string airport_path = "../Data/airports.csv";
  std::string flights_path = "../Data/flights.csv";

  std::future<std::vector<Flight>> f = std::async(std::launch::async, Flight::deserialize, flights_path);
  std::future<std::unordered_map<std::string, Airline>> airlines = std::async(std::launch::async, Airline::deserialize, airline_path);
  std::future<std::unordered_map<std::string, Airport>> airports = std::async(std::launch::async, Airport::deserialize, airport_path);

  Edge a = Edge(1, 2, 10);
  Edge b = Edge(2, 3, 10);
  Edge c = Edge(1, 4, 10);
  Edge d = Edge(3, 5, 10);
  Edge e = Edge(2, 6, 10);
  auto adj = std::unordered_set<Edge>{};
  adj.insert(a);

  return 0;
}
