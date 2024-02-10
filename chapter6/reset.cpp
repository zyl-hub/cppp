#include <cstdint>
#include <iostream>

void reset(int32_t &num) { num = 0; }

int main() {
  int32_t a = 10;
  reset(a);
  std::cout << a << std::endl;
  return 0;
}