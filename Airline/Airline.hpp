#ifndef AIRLINE_HPP
#define AIRLINE_HPP

#include <string>
#include <unordered_map>
#include "../Helpers/StringHelpers.hpp"
#include <unordered_map>
#include "../Parser/Parser.hpp"

class Airline {
private:
  std::string code;
  std::string name;
  std::string callsign;
  std::string country;

public:

  Airline(std::string code, std::string name, std::string callsign, std::string country);
  
  std::string getCode();
  std::string getName();
  std::string getCallsign();
  std::string getCountry();

  void setCode(std::string code);
  void setName(std::string name);
  void setCallsign(std::string callsign);
  void setCountry(std::string country);

  static std::unordered_map<std::string, Airline> deserialize(std::string data);
  
};

#endif
