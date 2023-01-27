cmake_minimum_required(VERSION 3.25)
project(mindthegap)

set(CMAKE_CXX_STANDARD 17)

add_executable(mindthegap main.cpp Parser/Parser.cpp Parser/Parser.hpp Airline/Airline.cpp Airline/Airline.hpp Helpers/StringHelpers.cpp Helpers/StringHelpers.hpp)
