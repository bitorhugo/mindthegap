#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include "Airport/Airport.hpp"
#include "Parser/Parser.hpp"
#include "Airline/Airline.hpp"
#include "Helpers/StringHelpers.hpp"



int main() {
  std::string airline_path = "../Data/airlines.csv";
  std::string airport_path = "../Data/airplanes.csv";
  std::string flights_path = "../Data/flights.csv";

  std::unordered_map<std::string, Airline> airlines = Airline::deserialize(airline_path);
  std::unordered_map<std::string, Airport> airports = Airport::deserialize(airport_path);

  for (auto& [k, v] : airports) {
    std::cout << v << std::endl;
  }

  return 0;
}
