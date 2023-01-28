#include "Parser.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>

Parser::Parser(std::string filename) {
  std::cout << "Opening File: " << filename << std::endl;
  file = std::ifstream(filename);
}

Parser::~Parser(){
  std::cout << "Closing file.." << std::endl;
  file.close();
}

std::ifstream& Parser::getFile() {
  return file;
}
