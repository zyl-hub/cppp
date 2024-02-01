#include <iostream>
#include <string>

int main() {
  auto s1 = std::string{};
  auto s2 = std::string{};

  do {
    std::cin >> s1 >> s2;
    if (s1 < s2) {
      std::cout << "s1 is less than s2" << std::endl;
    } else if (s1 > s2) {
      std::cout << "s2 is less than s1" << std::endl;
    } else {
      std::cout << "s1 is equal to s2" << std::endl;
    }
  } while (std::cin);
}