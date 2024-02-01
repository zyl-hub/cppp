#include <cstdint>
#include <iostream>
#include <vector>

int main() {
  auto ivec = std::vector<int32_t>{0,1,2,3,4,5,6,7,8,9};
  for (auto it = ivec.begin(); it!=ivec.end();++it) {
    *it = (*it%2 == 1) ? *it*2 : *it;
  }
  for (const auto num : ivec) {
    std::cout << num << ' ';
  }
  return 0;
}