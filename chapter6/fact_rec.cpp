#include <iostream>

int factorial(int val) {
  while (val != 0) {
    return val * factorial(val - 1);
  }
  return 1;
}

int main() {
  std::cout << factorial(5) << std::endl;
  return 0;
}