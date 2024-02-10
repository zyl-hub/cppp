#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  auto length = std::strlen(argv[1]) + std::strlen(argv[2]);
  char str[length];
  strcpy(str, argv[1]);
  strcat(str, argv[2]);
  std::cout << str << std::endl;
  return 0;
}