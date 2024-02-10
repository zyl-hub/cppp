#include <cstdint>
#include <iostream>

void mySwap(int *num1, int *num2) {
  int temp = *num2;
  *num2 = *num1;
  *num1 = temp;
}

int main() {
  int num1 = 0;
  int num2 = 1;
  mySwap(&num1, &num2);
  std::cout << num1 << num2 << std::endl;
  return 0;
}