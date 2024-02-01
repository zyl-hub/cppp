#include <iostream>

int main() {
  const char *cp = "Hello World";
  if (cp && *cp) {
    std::cout << "true";
  }
  return 0;
}