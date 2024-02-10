#include <cstdint>
#include <iostream>

void swap(int32_t*& num1, int32_t*& num2) {
  auto temp = num2;
  num2 = num1;
  num1 = temp;
}

int main() {
  int32_t a = 0;
  int32_t b = 1;
  int32_t* num1 = &a;
  int32_t* num2 = &b;
  swap(num1, num2);
  std::cout << *num1 << *num2 << std::endl;
  return 0;
}