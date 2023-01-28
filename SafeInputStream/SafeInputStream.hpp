#pragma once

#include <fstream>

class SafeInputStream {

private:
  std::ifstream file;

public:
  SafeInputStream(std::string);
  ~SafeInputStream();

  std::ifstream& getFile();
};


