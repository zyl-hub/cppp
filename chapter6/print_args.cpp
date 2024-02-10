#include <cstddef>
#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  auto str = std::string{};
  for (size_t i = 1; i != argc; ++i) {
    str += std::string(argv[i]) + " ";
  }
  std::cout << "the number of args is " << argc - 1 << std::endl;
  std::cout << str << std::endl;
  return 0;
}