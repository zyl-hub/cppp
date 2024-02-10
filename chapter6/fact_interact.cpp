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
  int32_t temp;
  std::cin >> temp;
  std::cout << temp << "! is " << fact(temp) << std::endl;
  return 0;
}