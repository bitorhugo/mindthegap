#include "Airline.hpp"
#include <string>
#include <unordered_map>

Airline::Airline(std::string _code, std::string _name, std::string _callsign,
                 std::string _country)
    : code(_code), name(_name), callsign(_callsign), country(_country) {}

std::string Airline::getCode(){return code;}
std::string Airline::getName(){return name;}
std::string Airline::getCallsign(){return callsign;}
std::string Airline::getCountry(){return country;}

void Airline::setCode(std::string _code){code = _code;}
void Airline::setName(std::string _name){name = _name;}
void Airline::setCallsign(std::string _callsign){callsign = _callsign;}
void Airline::setCountry(std::string _country) {country = _country;}
  
std::unordered_map<std::string, Airline> Airline::deserialize(std::string data) {
  Parser airlines_parser("../Data/airlines.csv");
  std::unordered_map<std::string, Airline> airlines;
  std::string line;
  getline(airlines_parser.getFile(), line);  //discard first line
  while(std::getline(airlines_parser.getFile(), line)) {
    auto airline = split(line, ',');
    Airline a (airline[0], airline[1], airline[2], airline[3]);
    airlines.insert(std::make_pair(a.getCode(), a));
  }
  return airlines;
}

