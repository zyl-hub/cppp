#include <iostream>

int main() {
  int32_t a = 4, b = 3, c = 2, d = 1;
  if (a > b && b > c && c > d) {
    std::cout << "true" << std::endl;
  }
}