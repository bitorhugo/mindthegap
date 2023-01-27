#include "Parser.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>

Parser::Parser(std::string filename) {
  file = std::ifstream(filename);
}

Parser::~Parser(){
  std::cout << "Destructor" << std::endl;
  file.close();
}

std::ifstream& Parser::getFile() {
  return file;
}
