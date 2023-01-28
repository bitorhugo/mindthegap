#include "Airport.hpp"

Airport::Airport(std::string code, std::string name, std::string city,
                 std::string country, double latitude, double longitude)
  : M_Code(code), M_Name(name), M_City(city), M_Country(country),
    M_Latitude(latitude), M_Longitude(longitude){}

std::string Airport::getCode(){return M_Code;}
std::string Airport::getName(){return M_Name;}
std::string Airport::getCity(){return M_City;}
std::string Airport::getCountry(){return M_Country;}
double Airport::getLatitude(){return M_Latitude;}
double Airport::getLongitude(){return M_Longitude;}


void Airport::setCode(std::string code){M_Code = code;}
void Airport::setName(std::string name){M_Name = name;}
void Airport::setCity(std::string city){M_City = city;}
void Airport::setCountry(std::string country){M_Country = country;}
void Airport::setLatitude(double latitude){M_Latitude = latitude;}
void Airport::setLongitude(double longitude) { M_Longitude = longitude; }

std::ostream& operator<< (std::ostream& os, const Airport& obj) {
  return os << "{" << obj.M_Code << "," << obj.M_Name << "," << obj.M_City
            << "," << obj.M_Country << "," << obj.M_Latitude << ","
            << obj.M_Longitude << "}";
}


std::unordered_map<std::string, Airport> Airport::deserialize(std::string path) {
  Parser airports_parser(path);
  std::unordered_map<std::string, Airport> airports;
  std::string line;
  getline(airports_parser.getFile(), line);  //discard first line
  while(std::getline(airports_parser.getFile(), line)) {
    auto airport = split(line, ',');
    Airport a (airport[0], airport[1], airport[2], airport[3], stod(airport[4]), stod(airport[5]));
    airports.insert(std::make_pair(a.getCode(), a));
  }
  return airports;
}
