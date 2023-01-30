#include "Edge.hpp"
#include <iostream>

Edge::Edge(int from, int to, double weight): M_From(from), M_To(to), M_Weight(weight){}

int Edge::Edge::getFrom(){return M_From;}
int Edge::Edge::getTo(){return M_To;}
double Edge::getWeight(){return M_Weight;}

void Edge::setFrom(int from){M_From = from;}
void Edge::setTo(int to){M_To = to;}
void Edge::setWeight(double weight){M_Weight = weight;}

std::ostream& operator<<(std::ostream& os, Edge obj) {
  return os << obj.getTo() << "->" << obj.getFrom();
}


