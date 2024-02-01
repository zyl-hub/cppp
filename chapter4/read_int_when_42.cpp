#include <iostream>
#include <vector>

int main() {
  auto ivec = std::vector<int32_t>{};
  int32_t num;
  while (std::cin >> num && num == 42) {
    ivec.push_back(num);
  }
  for (auto num : ivec) {
    std::cout << num << ' ';
  }
  return 0;
}