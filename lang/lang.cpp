#include <fstream>
#include <iostream>
#include <cstdio>
#include <cassert>
#include <string.h>
#include <cstdlib>

#include "lang.hpp"

memory document;

typedef std::string str;

using std::printf;
using std::scanf;

int main(int argc, char **argv) {
  system("@ECHO OFF");
  char *src = "";
  bool isFile = false;
  if(argc > 0) {
    for(int i = 0; i < argc - 1; i++)
      src += argv[i] + " ";
    src += argv[argc - 1];
  } else {
    char t = tolower(input<char>("Read from file? (y/n)"));
    assert(t == "y" || t == "n");
    isFile = (t == "y");
    if(isFile) src = input("Path to file: ");
  }
  char *t1;
  if(isFile) {
    ifstream f(src);
    while(getline(f, t1)) read(t1);
  } else while((t1 = input(":: >>> ")) != "end" && t1 != 0 && t1 != "") read(t1);
  std::cout << "Terminating program...\n"
            << "Program terminated.";
  system("PAUSE");
  return 0;
}

void defineVar(char *name, std::any value) {
  unsigned int i = sizeof(document.variables)/sizeof(Variable);
  document.variables[i].value = value;
  strcpy(document.variables[i].name, value);
}

void read(char *line) {
  str ln(line);
  int t = 0;
  if(ln.substr(0, (t = 9)) == "variable " || ln.substr(0, (t = 4)) == "var " 
  || ln.substr(0, (t = 8)) == "let mut " || ln.substr(0, (t = 12)) == "let mutable"
  || ln.substr(0, (t = 4)) == "let " || ln.substr(0, (t = 8)) == "mutable "
  || ln.substr(0, (t = 4)) == "mut ") {
    str s = ln.substr(t);
    // char **vname = ln.split()
    // ...
  }
}
