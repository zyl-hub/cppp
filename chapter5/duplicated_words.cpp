#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int main() {
  auto last_word = std::string{};
  auto word = std::string{};
  auto mword = std::string{};
  uint32_t cnt = 0;
  uint32_t mcnt = 0;
  while (std::cin >> word) {
    if (last_word == word) {
      ++cnt;
    } else {
      if (cnt > mcnt) {
        mword = last_word;
        mcnt = cnt;
      }
      cnt = 0;
    }
    last_word = word;
  }
  if (mcnt) {
    std::cout << mword << " occurred " << mcnt + 1 << " times." << std::endl;
  } else {
    std::cout << "no word was repeated." << std::endl;
  }
  return 0;
}