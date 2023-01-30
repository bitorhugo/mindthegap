#pragma once

#include <cstddef>
#include <functional>
#include <ostream>
#include <utility>
class Edge {
private:
  double M_Weight;
  int M_From;
  int M_To;
public:
  Edge (int from, int to, double weight);

  int getFrom();
  int getTo();
  double getWeight();

  void setFrom(int from);
  void setTo(int to);
  void setWeight(double weight);

  friend std::ostream& operator<<(std::ostream& os, Edge obj);

  template <class T1, class T2>
  std::size_t operator () (std::pair<T1, T2> const &v) const {
    return std::hash<T1>();
  }
};
