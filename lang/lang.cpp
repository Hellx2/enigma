#include <fstream>
#include <iostream>
#include <cstdio>
#include <cassert>
#include <string.h>
#include <cstdlib>

#include "lang.hpp"

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

void read(char *line) {
  str ln(line);
  // ...
}
