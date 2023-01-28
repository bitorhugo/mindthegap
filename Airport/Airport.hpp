#pragma once
#include <ostream>
#include <string>
#include <unordered_map>
#include "../Parser/Parser.hpp"
#include "../Helpers/StringHelpers.hpp"

class Airport {
private:
  std::string M_Code;
  std::string M_Name;
  std::string M_City;
  std::string M_Country;
  double M_Latitude;
  double M_Longitude;
public:

  Airport(std::string code, std::string name, std::string city,
          std::string country, double latitude, double longitude);

  std::string getCode();
  std::string getName();
  std::string getCity();
  std::string getCountry();
  double getLatitude();
  double getLongitude();


  void setCode(std::string code);
  void setName(std::string name);
  void setCity(std::string city);
  void setCountry(std::string country);
  void setLatitude(double latitude);
  void setLongitude(double longitude);

  friend std::ostream& operator<< (std::ostream& os, const Airport& obj);

  static std::unordered_map<std::string, Airport> deserialize(std::string path);
};
