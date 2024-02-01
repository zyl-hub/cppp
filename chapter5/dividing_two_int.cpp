#include <cstdint>
#include <exception>
#include <iostream>
#include <stdexcept>

int main() {
  int32_t a, b;
  while (true) {
    try {
      std::cin >> a >> b;
      if (b == 0) {
        throw std::runtime_error("the second number is zero");
      } else {
        std::cout << a / b << std::endl;
        break;
      }
    } catch (std::runtime_error err) {
      std::cout << err.what() << "\nTry Again? Enter y or n" << std::endl;
      char c;
      std::cin >> c;
      if (!std::cin || c == 'n')
        break;
    }
  }
  return 0;
}