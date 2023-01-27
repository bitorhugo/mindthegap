#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include "Parser/Parser.hpp"
#include "Airline/Airline.hpp"
#include "Helpers/StringHelpers.hpp"


int main() {
  std::string airline_path = "../Data/Airlines.csv";
  std::unordered_map<std::string, Airline> airlines = Airline::deserialize(airline_path);
  return 0;
}
