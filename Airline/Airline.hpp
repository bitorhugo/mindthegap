#ifndef AIRLINE_HPP
#define AIRLINE_HPP

#include <string>
#include <unordered_map>
#include "../Helpers/StringHelpers.hpp"
#include <unordered_map>
#include "../SafeInputStream/SafeInputStream.hpp"

class Airline {
private:
  
  std::string M_Code;
  std::string M_Name;
  std::string M_Callsign;
  std::string M_Country;

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

  friend std::ostream& operator<< (std::ostream& os, const Airline& obj);

  static std::unordered_map<std::string, Airline> deserialize(std::string path);
  
};

#endif
