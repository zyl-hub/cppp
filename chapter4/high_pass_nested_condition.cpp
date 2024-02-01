#include <cstdint>
#include <iostream>

int main() {
  int32_t grade;
  std::cin >> grade;
  std::cout << ((grade > 75) ? "high pass" : ((grade > 60) ? "pass" : "fail")) << std::endl;
  return 0;
}