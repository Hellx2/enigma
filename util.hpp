#include <iostream>
#include <variant>
#include <stddef.h>
#include <fstream>
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
      tmp = (size_t)(max(tmp, s.find(delim[i], pos)));
    r[r1++] = s.substr(pos, tmp);
    pos = tmp;
  }
  return r;
}

template<class T> size_t indexOf(T *arr, T x) {
  for(int i = 0; i < sizeof(arr) / sizeof(T); i++)
    if(arr[i] == x) return i;
  return -1;
}

template<class T> size_t lastIndexOf(T *arr, T x) {
  int r = -1;
  for(int i = 0; i < sizeof(arr) / sizeof(T); i++)
    if(arr[i] == x) r = i;
  return i;
}

template<class T> bool contains(T *arr, T x) {
  return indexOf<T>(arr, x) != -1;
}

void print(std::any value, std::ostream out = std::cout) {
  out << value;
}

void println(std::any value, std::ostream out = std::cout) {
  out << value << "\n";
}

template<class T> T scan(T x, std::istream in = std::cin) {
  in >> x;
}

char *getFileContents(char *src) {
  std::ifstream f(src);
  char *r = "";
  char *t;
  while(getline(f, t)) r += t;
  return r;
}

char **getLines(char *src) {
  std::ifstream f(src);
  char **r;
  int i = 0;
  char *t;
  while(getline(f, t)) r[i++] = t;
  return r;
}

template <class T = int> int length(T *arr) {
  int r = 0;
  while(arr[r++] != 0) {}
  return r;
}
