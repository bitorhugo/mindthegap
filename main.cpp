#include <cstdlib>
#include <fstream>
#include <iostream>
#include <future>
#include <ostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include "Airport/Airport.hpp"
#include "SafeInputStream/SafeInputStream.hpp"
#include "Airline/Airline.hpp"
#include "Helpers/StringHelpers.hpp"
#include "Flight/Flight.hpp"



int main() {
  std::string airline_path = "../Data/airlines.csv";
  std::string airport_path = "../Data/airports.csv";
  std::string flights_path = "../Data/flights.csv";

  std::future<std::vector<Flight>> f = std::async(std::launch::async, Flight::deserialize, flights_path);
  std::future<std::unordered_map<std::string, Airline>> airlines = std::async(std::launch::async, Airline::deserialize, airline_path);
  std::future<std::unordered_map<std::string, Airport>> airports = std::async(std::launch::async, Airport::deserialize, airport_path);

  std::cout << "flights:" << f.get().size() << std::endl;
  std::cout << "airlines:" << airlines.get().size() << std::endl;
  std::cout << "airports:" << airports.get().size() << std::endl;

  return 0;
}
