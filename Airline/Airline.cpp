#include "Airline.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>

Airline::Airline(std::string _code, std::string _name, std::string _callsign,
                 std::string _country)
    : M_Code(_code), M_Name(_name), M_Callsign(_callsign), M_Country(_country) {}

std::string Airline::getCode(){return M_Code;}
std::string Airline::getName(){return M_Name;}
std::string Airline::getCallsign(){return M_Callsign;}
std::string Airline::getCountry(){return M_Country;}

void Airline::setCode(std::string _code){M_Code = _code;}
void Airline::setName(std::string _name){M_Name = _name;}
void Airline::setCallsign(std::string _callsign){M_Callsign = _callsign;}
void Airline::setCountry(std::string _country) { M_Country = _country; }

std::ostream& operator<< (std::ostream& os, const Airline& obj) {
 return os << "{" << obj.M_Code << "," << obj.M_Name << "," << obj.M_Callsign
           << "," << obj.M_Country << "}";
}
  
std::unordered_map<std::string, Airline> Airline::deserialize(std::string path) {
  SafeInputStream airlines_parser(path);
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

