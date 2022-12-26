#include <fstream>
#include <iostream>
#include <cstdio>
#include "lang.hpp"

using std::printf;
using std::scanf;

int main(int argc, char **argv) {
  char *src = "";
  if(argc > 0) {
    for(int i = 0; i < argc - 1; i++)
      src += argv[i] + " ";
    src += argv[argc - 1];
  } else {
    printf("Path to file: ");
    scanf("%s", &src);
  }
  return 0;
}
