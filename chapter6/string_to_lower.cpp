#include <cctype>
#include <iostream>
#include <string>

void str_to_lower(std::string& s) {
  for (auto& c : s) {
    c = tolower(c);
  }
}

int main() {
  auto s = std::string{"TESt"};
  str_to_lower(s);
  std::cout << s << std::endl;
  return 0;
}