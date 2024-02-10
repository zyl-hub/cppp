#include <cctype>
#include <iostream>
#include <string>

bool contain_captial(const std::string& s) {
  for (const auto c : s) {
    if(std::isupper(c)) return true;
  }
  return false;
}

int main() {
  auto s = std::string{"test"};
  std::cout << contain_captial(s) << std::endl;
  return 0;
}