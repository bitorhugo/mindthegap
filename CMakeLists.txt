cmake_minimum_required(VERSION 3.25)
project(mindthegap)

set(CMAKE_CXX_STANDARD 17)

add_executable(mindthegap main.cpp SafeInputStream/SafeInputStream.cpp SafeInputStream/SafeInputStream.hpp Airline/Airline.cpp Airline/Airline.hpp Airport/Airport.cpp Airport/Airport.hpp Helpers/StringHelpers.cpp Helpers/StringHelpers.hpp Flight/Flight.cpp Flight/Flight.hpp)
