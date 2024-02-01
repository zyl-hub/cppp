#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  auto ivec1 = std::vector<int32_t>{0, 1, 1, 2};
  auto ivec2 = std::vector<int32_t>{0, 1, 1, 2, 3, 5, 8};
  decltype(ivec1.size()) min_len =
      ((ivec1.size() < ivec2.size()) ? ivec1.size() : ivec2.size());
  bool is_prefix = true;
  for (decltype(ivec1.size()) i = 0; i < min_len; ++i) {
    if (ivec1[i] != ivec2[i]) {
      is_prefix = false;
    }
  }
  if (is_prefix) {
    std::cout << "prefix" << std::endl;
  } else {
    std::cout << "not prefix" << std::endl;
  }
  return 0;
}