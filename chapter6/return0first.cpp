#include <cstdint>
#include <iostream>

int32_t return0() {
  static int32_t cnt = 0;
  return cnt++;
}

int main() {
  std::cout << return0() << return0() << return0() << std::endl;
  return 0;
}