#include "SafeInputStream.hpp"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>

SafeInputStream::SafeInputStream(std::string filename) {
  std::cout << "Opening File: " << filename << std::endl;
  file = std::ifstream(filename);
  if (file.fail()) {
    std::cerr << "Could not open file.." << std::endl;
  }
  else {
    std::cout << "Success, " << filename << " opened!" << std::endl;
  }
}

SafeInputStream::~SafeInputStream(){
  std::cout << "Closing file.." << std::endl;
  file.close();
}

std::ifstream& SafeInputStream::getFile() {
  return file;
}
