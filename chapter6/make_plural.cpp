#include <cstddef>
#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word,
                        const std::string &ending = "s") {
  return (ctr > 1) ? word + ending : word;
}

int main() {
  auto word = std::string{"success"};
  std::cout << make_plural(1, word, "es") << std::endl
            << make_plural(2, word, "es") << std::endl;
  word = "failure";
  std::cout << make_plural(1, word) << std::endl
            << make_plural(2, word) << std::endl;
  return 0;
}