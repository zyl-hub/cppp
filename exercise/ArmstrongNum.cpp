/*
// an Armstrong number is a number that equals the sum of its individual digits,
each raised to the power of the number of digits
*/
#include <iostream>
#include <math.h>

int main() {
  for (int i = 1; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      for (int k = 0; k < 10; ++k) {
        int num = i * 100 + j * 10 + k;
        int pow_sum = std::pow(i, 3) + std::pow(j, 3) + std::pow(k, 3);
        if (num == pow_sum) {
          std::cout << num << std::endl;
        }
      }
    }
  }
  return 0;
}