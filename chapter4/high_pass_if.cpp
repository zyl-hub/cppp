#include <iostream>

int main() {
  int32_t grade;
  std::cin >> grade;
  if (grade > 75) {
    std::cout << "high pass" << std::endl;
  } else if (grade > 60) {
    std::cout << "pass" << std::endl;
  } else {
    std::cout << "fail" << std::endl;
  }
  return 0;
}