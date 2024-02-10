#include <cstdint>
#include <iostream>

int32_t fact(int32_t val) {
  int32_t res = 1;
  while (val > 1) {
    res *= val--;
  }
  return res;
}

int main() {
  std::cout << "5! is " << fact(5) << std::endl;
  return 0;
}