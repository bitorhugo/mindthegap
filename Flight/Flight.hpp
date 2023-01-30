#pragma once
#include <iostream>
#include <unordered_map>
#include "../SafeInputStream/SafeInputStream.hpp"
#include "../Helpers/StringHelpers.hpp"


class Flight {
private:
  std::string M_Source;
  std::string M_Target;
  std::string M_Airline;
  
public:
  Flight(std::string M_Source, std::string M_Target, std::string M_Airline);

  std::string getSource();
  std::string getTarget();
  std::string getAirline();
  
  void setSource(std::string source);
  void setTarget(std::string target);
  void setAirline(std::string airline);

  friend std::ostream& operator<< (std::ostream& os, const Flight& obj);
  static std::vector<Flight> deserialize(std::string path);
};
