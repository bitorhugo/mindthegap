#ifndef PARSER_HPP
#define PARSER_HPP
#include <fstream>

class Parser {

  private:
  std::ifstream file;

  public:
  Parser(std::string);
  ~Parser();

  std::ifstream& getFile();
};

#endif
