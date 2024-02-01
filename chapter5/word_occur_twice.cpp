#include <cctype>
#include <iostream>
#include <string>

int main() {
  auto last_word = std::string{};
  auto temp_word = std::string{};
  bool twice = false;

  do {
    std::cin >> temp_word;
    if(temp_word == last_word && std::isupper(temp_word[0])) {
      std::cout << temp_word << " occurs twice" << std::endl;
      twice = true;
    }
    last_word = temp_word;
  } while (std::cin && !twice);
  if (!twice) {
    std::cout << "no word was repeated" << std::endl;
  }
  return 0;
}