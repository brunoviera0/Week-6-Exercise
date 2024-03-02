#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <string> 

struct int_vector {
  int id;
  int from;
  int to;
  int_vector(const int_vector &i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {} //copy constructor
  int_vector() : id(-1), from(0), to(0) {} //constructor

  int_vector(int id, int from, int to) : id(id), from(from), to(to) {}
};

std::vector<int_vector> read_vectors(const std::string& filename);
void print_vectors_reverse(const std::vector<int_vector>& vectors);

#endif