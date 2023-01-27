#include "StringHelpers.hpp"
#include <vector>

std::vector<std::string> split(std::string str, char delim) {
    std::string tok;
    std::vector<std::string> airline;
    std::stringstream check (str);
    while (std::getline(check, tok, ',')) {
      airline.push_back(tok);
    }
    return airline;
}
