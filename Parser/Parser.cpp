#include "Parser.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>

Parser::Parser(std::string filename) {
  std::cout << "Opening File: " << filename << std::endl;
  file = std::ifstream(filename);
  if (file.fail()) {
    std::cerr << "Could not open file.." << std::endl;
  }
  else {
    std::cout << "Success, " << filename << " opened!" << std::endl;
  }
}

Parser::~Parser(){
  std::cout << "Closing file.." << std::endl;
  file.close();
}

std::ifstream& Parser::getFile() {
  return file;
}
