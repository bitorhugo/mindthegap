#include "Flight.hpp"
#include <cstdio>
#include <iostream>
#include <ostream>


Flight::Flight(std::string source, std::string target, std::string airline): M_Source(source), M_Target(target), M_Airline(airline){}

std::string Flight::getSource(){return M_Source;}
std::string Flight::getTarget(){return M_Target;}
std::string Flight::getAirline(){return M_Airline;}
  
void Flight::setSource(std::string source){M_Source = source;}
void Flight::setTarget(std::string target){M_Target = target;}
void Flight::setAirline(std::string airline){M_Airline = airline;}

std::ostream &operator<<(std::ostream &os, const Flight &obj) {
  return os << "{" << obj.M_Source << ", " << obj.M_Target << ", " << obj.M_Airline << "}";
}
std::vector<Flight> Flight::deserialize(std::string path) {
  SafeInputStream flights_parser(path);
  std::vector<Flight> flights;
  std::string line;
  getline(flights_parser.getFile(), line);  //discard first line
  while(std::getline(flights_parser.getFile(), line)) {
    auto flight = split(line, ',');
    Flight f (flight[0], flight[1], flight[2]);
    flights.push_back(f);
  }
  return flights;
}
