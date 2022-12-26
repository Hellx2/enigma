#include <iostream>
#include <variant>
#include <stddef.h>
#include "math.hpp"

#pragma once

typedef std::variant<char*, std::basic_string> _STR_;

template <class T> T input(_STR_ o, std::ostream out = std::cout, std::istream in = std::cin) {
  out << o;
  T returnvalue;
  in >> returnvalue;
  return returnvalue;
}

char **split(char *text, char **delim) {
  std::string s(text);
  char **r;
  int r1 = 0;
  size_t pos = 0;
  size_t delim_length = 0;
  while(delim[delim_length++] != NULL) {}
  while(pos < sizeof(s.c_str()) / sizeof(char)) {
    size_t tmp = 0;
    for(int i = 0; i < delim_length; i++)
      tmp = (size_t)max(tmp, s.find(delim[i], pos));
    r[r1++] = s.substr(pos, tmp);
    pos = tmp;
  }
}
