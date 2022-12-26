#include <any>

class Instruction {
  public:
    bool hasReturn;
    std::any run();
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

typedef struct {}

typedef struct {
  Variable *variables;
  Function *functions;
  Type *types;
} memory;
