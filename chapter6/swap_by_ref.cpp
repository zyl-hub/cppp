#include <cstdint>
#include <iostream>

void swap(int32_t& num1, int32_t& num2) {
  int32_t temp = num2;
  num2 = num1;
  num1 = temp;
}

int main() {
  int32_t a = 0;
  int32_t b = 1;
  swap(a, b);
  std::cout << a << b << std::endl;
  return 0;
}