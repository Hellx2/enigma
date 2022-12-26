#include <any>
#include <iostream>
#include <typeinfo>

#pragma once

template <class T = void> class Instruction {
  public:
    bool hasReturn() {
      return typeid(T) != typeid(void);
    }
    T run();
}

typedef struct {
  char *name;
  std::any value;
} Variable;

typedef struct {
  char *name;
  Instruction *steps;
} Function;

typedef struct {
  bool isSigned = true;
  bool floatingPoint = false;
  // unsigned long long min = isSigned ? -max - 1 : 0;
  unsigned long long max;
} NumTypeOpts;

typedef struct {
  char *name;
  Property *props = nullptr;
  NumTypeOpts numOpts = NULL;
} Type;

typedef struct {
  Variable *variables;
  Function *functions;
  Type *types;
} memory;

template <class T = char*> T input(std::any o, std::ostream out = std::cout, std::istream in = std::cin) {
  out << o;
  T r;
  in >> r;
  return r;
}
